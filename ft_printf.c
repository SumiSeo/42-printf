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
			count += ft_putchar(*str);
		}
		else
		{
			str++;
			if (*str == 'c')
			{
				ch = va_arg(args, int);
				count += ft_putchar(ch);
			}
			else if (*str == 's')
			{
				s = va_arg(args, char *);
				count += ft_putstr(s);
			}
			else if (*str == 'p')
			{
				p = va_arg(args, void *);
				count += ft_putptr((long unsigned)p);
			}
			else if (*str == 'd')
			{
				num = va_arg(args, int);
				count += ft_putnbr(num);
			}
			else if (*str == 'u')
			{
				num = va_arg(args, unsigned int);
				count += ft_putunbr(num);
			}
			else if (*str == 'x')
			{
				num = va_arg(args, unsigned int);
				count += ft_putnbr_base(num, 'l');
			}
			else if (*str == 'X')
			{
				num = va_arg(args, unsigned int);
				count += ft_putnbr_base(num, 'b');
			}
			else if (*str == '%')
			{
				putchar('%');
			}
			else
			{
				count += putchar(*str);
			}
		}
		str++;
	}
	printf("total count %d\b", count);
	va_end(args);
	return (count);
}

int	main(void)
{
	char	*ptr;
	int		num;
	char	*s;
	char	c;

	num = 40;
	ptr = "pointer address";
	c = 'A';
	s = "PRINT F";
	ft_printf("I am testing character :%c\n and %s\n and %p\n and %d\n %%\n", c,
		s, &ptr, num);
	printf("%p\n", &ptr);
	ft_printf("%p\n", &ptr);
}
