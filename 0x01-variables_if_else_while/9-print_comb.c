#include <stdio.h>
 /**
  * main - Prints all possible combinations of single-digit numbers.
  * Description: using the main function
  * Return: 0 always
  */
int main(void)
{
/*your code goes here*/
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
