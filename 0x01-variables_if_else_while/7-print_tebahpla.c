#include <stdio.h>

/**
 * main - print the alphabet in descending order
 * Return: Always 0
 */
int main(void)
{
	char i

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
