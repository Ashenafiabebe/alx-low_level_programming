#include <stdin.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int a = 0;
	long n = 1, m = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", n);
	else if (a == 1)
	printf(", %d", m);
	else
	{
	m += n;
	n = m - n;
	printf(", %d", m);
	}
	++a;
	}
	printf('\n');
	return (0);
}
