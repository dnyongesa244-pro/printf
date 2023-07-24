#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdarg.h>
int _putchar(char c)
{
        return (write(1, &c, 1));
}
void printint(int num)
{
	int i, j;
	int temp;
	
	int size;
	if(num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if(num == 0)
	{
		_putchar('0');
	}
	size = 0;
	temp = num;
	while(temp != 0 )
	{
		temp /= 10;
		size++;
	}
	i = 0;
	int array[size];
	while(num != 0)	
	{
		array[i] = num % 10;
		num /= 10;
		i++;
	}
	for(i = size-1; i>=0 ; i--)
	{
		_putchar('0' + array[i]);
	}
	_putchar('\n');
}
void printstring(char *word)
{
	int x;
	x = strlen(word);
	
	int i;
	
	while(i<x)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
}
void _printf(const char *format, ...)
{
        va_list args;
        va_start(args, format);

        while(*format)
        {
                if(*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case 'd':
                                        {
                                                int value = va_arg(args, int);
                                                printint(value);
                                                
                                                break;
                                        }
                                case 'c':
                                        {
                                                int value = va_arg(args, int);
                                                printf("%c", value);
                                                break;
                                        }
                                case 'f':
                                        {
                                                double value = va_arg(args, double);
                                                printf("%f", value);
                                                break;
                                        }
                                case 's':
                                        {
                                                char *value = va_arg(args, char*);
                                                printstring(value);
                                                break;
                                        }
                                default:
                                        {
                                                _putchar(*format);
                                                break;
                                        }
                        }
                }
                else
                {
                        _putchar(*format);
                }
                format++;
        }
        va_end(args);
}
int main(void)
{
	int x;
	char *name;
	char ch = 'd';
	float point;
	
    name = "daniel";
    
    _printf("%s",name);
	x = 309;
	_printf("%d", x);
}
	

