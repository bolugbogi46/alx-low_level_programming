#include "main.h"

/**
* _strlen - checks the length of the string
* @s: -string to be checked
* Return: The length of the string
*/

int _strlen(char *s)
{
int _strlen = 0;
while(s[_strlen])
_strlen++;
return (_strlen);
}
