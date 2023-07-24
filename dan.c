#include <stdio.h>
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
        char ch;
	ch = 'd';

	_putchar(ch);
	putchar('\n');


	return 0;
}
