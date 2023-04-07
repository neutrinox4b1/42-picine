/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:38:40 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 22:20:27 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_string.h"

void	my_putstr(char *str)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
		write(1, sp++, 1);
	return ;
}

void	my_putnbr(long long n)
{
	char	tmp;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		my_putnbr(n / 10);
	tmp = n % 10 + '0';
	write(1, &tmp, 1);
	return ;
}

int	my_strlen(char *str)
{
	char	*sp;
	int		len;

	sp = str;
	len = 0;
	while (*sp != '\0')
	{
		sp++;
		len++;
	}
	return (len);
}

int	my_atoi(char *str)
{
	char	*sp;
	int		res;
	int		sign;

	sp = str;
	res = 0;
	sign = 1;
	while ((*sp >= 9 && *sp <= 13) || *sp == 32)
		sp++;
	while (*sp == '+' || *sp == '-')
	{
		if (*sp == '-')
			sign *= -1;
		sp++;
	}
	while (*sp >= '0' && *sp <= '9')
	{
		res = res * 10 + (*sp - '0');
		sp++;
	}
	return (res * sign);
}
