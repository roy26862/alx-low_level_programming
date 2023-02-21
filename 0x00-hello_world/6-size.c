#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int ii;
	long long int ll;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ii));
	printf(
			"The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
