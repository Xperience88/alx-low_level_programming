#include "main.h"

/**
 * print_string - prints a string to stdout
 *
 * @str: the string to print
 */
void print_string(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check the code for infinite add.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;
	
	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		print_string("Error");
	}
	else
	{
		print_string(n);
	       	_putchar(' ');
		_putchar('+');
		_putchar(' ');
		print_string(m);
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		print_string(res);
	}
		n = "1234567890";
		m = "1";
		res = infinite_add(n, m, r2, 10);
		if (res == 0)
	{
		print_string("Error");
	}
		else
	{
		print_string(n);
		_putchar(' ');
		_putchar('+');
		_putchar(' ')
		print_string(m);
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		print_string(res);
	}
		n = "999999999";
		m = "1";
		res = infinite_add(n, m, r2, 10);
		if (res == 0)
		{
		print_string("Error");
	}
		else
	{
		print_string(n);
		_putchar(' ');
		_putchar('+');
		_putchar(' ');
		print_string(m);
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		print_string(res);
	}
		res = infinite_add(n, m, r3, 11);
		if (res == 0)
	{
		print_string("Error");
	}
		else
	{
		print_string(n);
		_putchar(' ');
		_putchar('+');
		_putchar(' ');
		print_string(m);
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		print_string(res);
	}
		return (0);
}
