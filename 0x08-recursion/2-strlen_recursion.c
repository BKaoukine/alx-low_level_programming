#include "main.h"
/**
 * _strlen_recursion - function returns a string's length
 * @s: string to count
 *
 * Description:calculate the length of  the given string using recursive Call
 *
 * Return: a number if succes
 */
int _strlen_recursion(char *s)
{
/*Check if the String is not NULL*/
if (*s != '\0')
{
/*Call the function recursivly to move to the other Characaters*/
/*Returns each time the number of characters removed*/
return (1 + _strlen_recursion(s + 1));
}
else
return (0);

}

