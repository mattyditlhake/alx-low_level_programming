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
	char capital = 'A';
	/*A TO  Z*/
	while (letter <= 'z' && capital <= 'Z')
	{
		putchar(letter);
		putchar(capital);
		letter++;
		capital++;
	}
	putchar('\n');
	return (0);
}
