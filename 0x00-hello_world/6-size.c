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
	long long ll;

	printf("The size of an int is: %lu\n byte(s)", (unsigned long)sizeof(i));
	printf("The size of an char is: %lu\n byte(s)", (unsigned long)sizeof(c));
	printf("The size of an float is: %lu\n byte(s)", (unsigned long)sizeof(f));
	printf("The size of an long int is: %lu\n byte(s)", (unsigned long)sizeof(ii));
	printf("The size of an long long is: %lu\n byte(s)", (unsigned long)sizeof(ll));

	return (0);
}
