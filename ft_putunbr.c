#include "libft.h"

int	ft_putunbr(unsigned int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		i++;
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		i++;
	}
	return (i);
}
