#include <stdio.h>
/**
 * main - print all single digits number of base 10 starting from 0
 * Description: using the main function
 * Return: 0 always
 */
int main(void)
{
/*your code goes here*/
int num;
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
putchar('\n');
return (0);
}
