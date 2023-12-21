#include <stdio.h>

/**
  * main - Entry point.
  * Description: the program prints all singlr digit numbers of base 10.
  * Return: Always 0 (Success).
  */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}