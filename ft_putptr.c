/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:10:37 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/23 17:10:59 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(long unsigned n)
{
	long	temp;
	long	nb;
	char	final[256];
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (i < 256)
	{
		final[i] = '\0';
		i++;
	}
	i = 0;
	nb = n;
	temp = 0;
	if (nb == 0)
		count += putchar('0');
	while (nb > 0)
	{
		temp = nb % 16;
		if (temp < 10)
			final[i++] = temp + '0';
		else
			final[i++] = "0123456789abcdef"[temp];
		nb /= 16;
	}
	i--;
	count = i;
	ft_putstr("0x");
	while (i >= 0)
		ft_putchar(final[i--]);
	return (count + 3);
}
/*
int	main(void)
{
	unsigned	n;

	n = 1234;
	ft_putptr((long unsigned)n);
	printf("Here : [%p]\n", (void *)(long unsigned)n);
}
*/