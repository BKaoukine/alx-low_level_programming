#include <stdio.h>
/**
 * is_palindrome_recursive - evaluate the string in reverse
 * @start: keep track of the start of the string
 * @end: keep track of the end of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *start, char *end)
{
if (*start != *end)
{
return (0);
}
if (start >= end)
{
return (1);
}
return (is_palindrome_recursive(start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
char *end = s;
while (*end != '\0')
{
end++;
}
end--;
return (is_palindrome_recursive(s, end));
}
