#include <stdio.h>

/**
* main - entry point
*
* Description: Prints the alphabet in lowercase, except q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	/*for loop which writes the alphabets in lower case*/
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
                {
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
