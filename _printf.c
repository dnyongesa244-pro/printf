#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
void printint(int num)
{
	int i;
	int temp;
	int size;
	int j;
	int *array;
	if(num < 0)
	{
		putchar('-');
		num *= -1;
	}
	if(num == '0')
		putchar('0');
	temp = num;
	size = 0;
	while(num != 0)
	{
		num/=10;
		size++;
	}
	array[size];

	for(i = 0 ; i < size ; i ++)
	{
		array[i] = num%10;
		num /= 10;
	}

	for(j = 0 ; j < size ; j++)
	{
		putchar('0' + array[j]);
	}
}
void printstring(char *word)
{
	int i;
	int x;
	x = strlen(word);
	i = 0;
	while(i < x)
	{
		putchar(word[i]);
		i++;
	}
}
void print(const char *format, ...)
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
				case 'i':
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
						printf("%s", value);
						break;
					}
				default:
					{
						putchar(*format);
						break;
					}
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);
}
