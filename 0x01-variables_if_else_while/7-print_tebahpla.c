#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 always
 */
int main(void)
{
/*your code goes here*/
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
