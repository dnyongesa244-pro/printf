ALX Software Engineering Printf Team Project Summary
The ALX Software Engineering team collaborated on a custom-made printf function for the C programming language, called _printf. This function was designed to mimic the behavior of the standard library function printf, allowing various input formats and optional arguments.

The team developed the _printf function as part of the ALX software engineering course requirement. The function writes output to the standard output stream (stdout) and can handle different format and option configurations.

Synopsis:

The _printf() function writes output to stdout, utilizing a local buffer of 1024 bytes for printing, though it can handle larger data sets. After a successful execution, the function returns the total number of characters printed to stdout, excluding the null byte at the end of strings. In case of an output error, it returns a negative value of -1.

The prototype of this function is: *int _printf(const char format, ...);

The format string for the _printf() function is a character string enclosed within double quotes. It consists of zero or more directives, which can be ordinary characters (not preceded by %), or conversion specifications. Each conversion specification starts with a % character and ends with a conversion specifier, and may include flags, a field width, a precision modifier, and a length modifier in a specific order.

Flags available for formatting:

#: Used for octal conversions, adds a zero if the first character of the output string is not zero. For hex conversions, adds "0x" or "0X" for nonzero results.
0: (Not implemented yet) Pads numeric conversions on the left with zeros.
-: (Not implemented yet) Left-justifies the converted value on the field boundary.
' ': Pads a positive number or empty string produced by a signed conversion with a single blank space.
+: Always includes a sign (+ or -) for signed conversions.
Field width, precision, and length modifiers are optional, allowing fine-tuning of the output format.

Conversion Specifiers available:

d, i: Converts the argument to a signed decimal notation.
o, u, x, X: Converts the argument to unsigned octal, decimal, or hexadecimal notation.
c: Converts the int argument to an unsigned char and writes the resulting character.
s: Expects a pointer to an array of characters and prints the characters up to (but not including) the null byte ('\0').
p: Prints a void pointer argument as a hexadecimal memory address.
%: Prints the character '%' and does not perform any conversion.
b: Converts the argument to an unsigned int value and prints its binary representation (base 2).
S: Expects a pointer to an array of characters and prints characters up to (but not including) the null byte ('\0'). Non-printable characters are represented as \x followed by their ASCII code value in hexadecimal (in uppercase).
r: Expects a pointer to an array of characters and prints the characters in reverse order up to (but not including) the null byte ('\0').
R: Expects a pointer to an array of characters and encodes them to ROT13, printing the result.
Author:
The _printf function was authored by Yonas Leykun.

This custom printf function offers a flexible and powerful alternative to the standard library printf, tailored to the specific needs of the ALX Software Engineering team's project.

