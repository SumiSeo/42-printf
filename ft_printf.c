/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:52:53 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/22 18:35:30 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	char	ch;
	int		num;
	char	*s;
	char	*p;

	va_start(args, str);
	count = 0;
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar(*str);
		}
		else
		{
			str++;
			if (*str == 'c')
			{
				ch = va_arg(args, int);
				ft_putchar(ch);
			}
			else if (*str == 's')
			{
				s = va_arg(args, char *);
				ft_putstr(s);
			}
			else if (*str == 'p')
			{
				p = va_arg(args, void *);
				ft_putstr(p);
				// The *void pointer argument has to be printed in hexadecimal format
			}
			else if (*str == 'd')
			{
				num = va_arg(args, int);
				ft_putnbr(num);
				// Prints a decimal(base 10)number
			}
			else if (*str == 'u')
			{
				// Prints an unsigned integer in base 10.
			}
			else if (*str == 'x')
			{
				// Prints a number in hexadecimal (base 16) lowercase format
			}
			else if (*str == 'X')
			{
				// Prints a number in hexadecimal (base 16) uppercase format
			}
			else if (*str == '%')
			{
				// Prints a percent sign
				putchar('%');
			}
			else
			{
				// handle unknow format specifiers
			}
		}
		str++;
		count++;
	}
	printf("total count %d\b", count);
	return (1);
}

int	main(void)
{
	char	*s;
	char	c;
	char	*ptr;
	int		num;
	int		num2;

	num = 40;
	ptr = "pointer address";
	c = 'A';
	s = "PRINT F";
	ft_printf("I am testing character :%c\n and %s\n and %p\n and %d\n %%\n", c,
		s, ptr, num);
	printf("@@@@TESTTESTETEST@@@@");
	num2 = -7;
	printf("TEST %d", num2);
}
