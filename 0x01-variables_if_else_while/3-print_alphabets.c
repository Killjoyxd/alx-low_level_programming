#include <stdio.h>

/**
 * main - prints alphabets in lower case and upper case
 * Return: Always 0
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	for (j = 'A'; j <= 'Z'; j++)
	putchar(j);

	putchar('\n');
	return (0);
}
