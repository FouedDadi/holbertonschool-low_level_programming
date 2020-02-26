#include "holberton.h"
/**
 *wildcmp- compare two strings
 *@s1: character
 *@s2: character
 *Return: return statement
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (wildcmp (s1 + 1, s2) || wildcmp (s1, s2 + 1))
return (1);
if (*s2 == '\0' && *(s1 + 1) != '\0')
return (0);
}  
if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
return ( wildcmp (s1 + 1, s2 + 1));  
if (*s1 == '\0' && *s2 == '\0')
return (1);
return (0);
}
