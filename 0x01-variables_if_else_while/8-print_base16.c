#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	/*While loop*/
	while (i < 16)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i + 'W');
		i++;
	}
	putchar('\n');
	return (0);
}
