/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:39:15 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/18 17:19:58 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_strlen(char *str)
{
	int		cnt;
	char	*sp;

	sp = str;
	cnt = 0;
	while (*sp != '\0')
	{
		cnt++;
		sp++;
	}
	return (cnt);
}

int	base_error(unsigned char *str)
{
	unsigned char	*sp;
	int				idx;
	int				ascii[256];
	int				len;

	len = 0;
	idx = 0;
	sp = str;
	while (idx < 256)
		ascii[idx++] = 0;
	while (*sp != '\0')
	{
		if (*sp == '+' || *sp == '-')
			return (1);
		ascii[*sp]++;
		if (ascii[*sp] >= 2)
			return (1);
		sp++;
		len++;
	}
	if (len <= 1)
		return (1);
	return (0);
}

void	base_calc(unsigned int nbr, int base_len, char *base)
{
	if (nbr == 0)
		return ;
	base_calc(nbr / base_len, base_len, base);
	write(1, & base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = my_strlen(base);
	if (base_error((unsigned char *)base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if (nbr == 0)
		write(1, &base[0], 1);
	base_calc((unsigned int) nbr, base_len, base);
	return ;
}
