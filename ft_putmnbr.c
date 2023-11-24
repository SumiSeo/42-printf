#include "libft.h"

int	ft_putmnbr(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return ((ft_putnbr(-n, base) + 1));
	}
	else if (n < base)
		return (ft_putchar(symbols[n]));
	else
	{
		count = ft_putnbr(n / base, base);
		return (count + ft_putnbr(n % base, base));
	}
	return (count);
}
