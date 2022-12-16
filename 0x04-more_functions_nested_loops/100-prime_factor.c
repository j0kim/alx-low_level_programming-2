#include <stdio.h>
#include <main.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 is always success
 */
int main(void)
{
	long number = 612852475143;
	int index;
	while (index++ < number / 2)
	{
		if (number % index == 0)
		{
			number /= 2;
			continue;
		}
		for (index = 3; index < number / 2; index += 2)
		{
			if (number % index == 0)
			{
				number /= index;
			}
		}
	}
}
 *
 * 																														printf("%ld\n", number);
 *
 * 																															return (0);
 *
 * 																															}
