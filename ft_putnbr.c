/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:35:38 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/22 18:37:45 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
		i += ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		i += ft_putchar(nb % 10 + '0');
	}
	return (i);
}
