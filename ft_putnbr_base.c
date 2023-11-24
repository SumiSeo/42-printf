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

void	ft_putnbr_basemin(int n, char base)
{
	long	temp;
	long	nb;
	char	*base_min;
	char	*base_maj;
	char	final[256];
	int		i;

	i = 0;
	base_min = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	nb = n;
	temp = 0;
	if (nb == 0)
		putchar(nb + '0');
	while (nb > 0)
	{
		temp = nb % 16;
		if (temp < 10)
		{
			final[i++] = temp + '0';
		}
		else
		{
			if (base == 'l')
				final[i++] = base_min[temp];
			else
				final[i++] = base_maj[temp];
		}
		nb /= 16;
	}
	while (i >= 0)
	{
		ft_putchar(final[i--]);
	}
}
int	main(void)
{
	int	num;

	num = 45342320;
	printf("Real HEXA : %X\n", num);
	ft_putnbr_basemin(num, 'b');
}
