#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';
	/*A TO  Z*/
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
