#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * _putchar - function to print character output
 *
 * @c: character
 *
 * Return: write (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printint - function to print integer
 *
 * @num: integer
 */
void printint(int num)
{
	int i, j, temp, size;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	size = 0;
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	i = 0;
	int array[size];

	while (num != 0)
	{
		array[i] = num % 10;
		num /= 10;
		i++;
	}
	for (i = size - 1; i >= 0 ; i--)
	{
		_putchar('0' + array[i]);
	}
	_putchar('\n');
}

/**
 * printstring - function to printstring
 *
 * @word: string
 */
void printstring(char *word)
{
	int x, i;

	x = strlen(word);
	i = 0;
	while (i < x)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _printf - function to give output
 *
 * @format: output to be given
 */
void _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
						printint(va_arg(args, int);
						break;
				case 'c':
						putchar(va_arg(args, int));
						break;
				case 'f':
						printf("%f", va_arg(args, double));
						break;
				case 's':
						printstring(va_arg(args, char*));
						break;
				default:
						_putchar(*format);
						break;
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
