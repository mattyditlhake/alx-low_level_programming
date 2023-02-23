#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	/*The for loop section*/
	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
