/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    ft.c 	                                         :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ndoukas@student.hive.fi>                   +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2019/07/28 13:32:15 by ndoukas          #+#     #+#              */
/*    Updated: 2017/07/28 18:39:42 by ndoukas         ###   ########.fi         */
/*                                                                              */
/* **************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		is_whitespace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

int		ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = 0;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value *= 10;
		value = (sign ? value + (*str - '0') : value - (*str - '0'));
		str++;
	}
	return (value);
}

int		digits(int num)
{
	int i;

	i = 0;
	if (num == 0)
		return (0);
	if (num < 0)
		++i;
	while (num != 0)
	{
		num /= 10;
		++i;
	}
	return (i - 1);
}
