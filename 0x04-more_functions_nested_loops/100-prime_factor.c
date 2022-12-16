#include <stdio.h>
#include <math.h>
/**
 * main - draws a diagonal line on the terminal
 * Return: 0
 */

int main(void)
{
long num = 612852475143;
long largest_prime_factor = 0;
long i;
while (num % 2 == 0)
{
	num /= 2;
}
for (i = 3; i <= sqrt(num); i += 2)
{
	if (num % i == 0)
	{
		num /= i;
		largest_prime_factor = i;
	}
}

if (num > 2)
{
	largest_prime_factor = num;
}

printf("%ld\n", largest_prime_factor);

return (0);
}
