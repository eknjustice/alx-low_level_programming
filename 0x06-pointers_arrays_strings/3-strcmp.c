#include "main.h"

/**
 * char *_strcmp - is a function that compares
 * @s1: first string
 * @s2: second string 
 * Return: the pointer to test
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while ((s1[i] == s2[i]) && ((s1[i] != '\0') || (s2[i] != '\0')))
{
i++;
}
return (s1[i] - s2[i]);
}
