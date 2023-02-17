#include <stdlib>
#include <time.h>
#include <stdio.h>

int main(void)
{
srand(time(0));
int n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n==0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n)
}
return (0)
}

