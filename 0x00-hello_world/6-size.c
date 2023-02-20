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

	printf(
			"The size of an char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf(
			"The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf(
			"The size of an long int is: %lu byte(s)\n", (unsigned long)sizeof(ii));
	printf(
	
			"The size of an long long int is: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf(
			"The size of an float is: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
