/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basemin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:31:08 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/24 10:31:12 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned int n, char base)
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
		{
			if (base == 'l')
				final[i++] = "0123456789abcdef"[temp];
			else
				final[i++] = "0123456789ABCDEF"[temp];
		}
		nb /= 16;
	}
	i--;
	count = i;
	while (i >= 0)
		ft_putchar(final[i--]);
	return (count);
}

/*
int	main(void)
{
	int	num;

	num = 4744;
	printf("@@Real HEXA : %x\n", num);
	ft_putnbr_base(num, 'l');
	printf("\n%p\n", &num);
}
*/