/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:58:12 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/23 17:11:28 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

// return void
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n, int base);
int	ft_putmnbr(long n, int base);
int	ft_putptr(long unsigned n);
int	ft_printf(const char *, ...);

#endif
