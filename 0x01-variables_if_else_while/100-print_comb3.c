#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
					if (!(i == '9' && j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
}

	putchar('\n');
	return (0);
}
