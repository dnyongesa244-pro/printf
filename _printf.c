#include <stdio.h>
#include <string.h>
#include <stdarg.h>
void printint(int num)
{
	int i, j;
	int temp;
	
	int size;
	if(num < 0)
	{
		putchar('-');
		num *= -1;
	}
	if(num == 0)
	{
		putchar('0');
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
		putchar('0' + array[i]);
	}
	putchar('\n');
}
void printstring(char *word)
{
	int x;
	x = strlen(word);
	
	int i;
	
	while(i<x)
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
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
int main(void)
{
	int x;
	char *name;
	char ch = 'd';
	float point;
	
    name = "daniel";
    
    print("%s",name);
	x = 309;

	
	print("%d",x);
}
