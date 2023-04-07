/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:49:05 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/28 19:38:15 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		digit_num(int n, int blen);
int		where_is(char c, char *str);
int		base_check_get_len(char *base);

int	ft_atoi_base(char *nbr, char *base, int blen)
{
	int		res;
	int		sign;
	char	*nbrp;

	res = 0;
	sign = 1;
	nbrp = nbr;
	while ((*nbrp >= 9 && *nbrp <= 13) || *nbrp == 32)
		nbrp++;
	while (*nbrp == '+' || *nbrp == '-')
	{
		if (*nbrp == '-')
			sign *= -1;
		nbrp++;
	}
	while (where_is(*nbrp, base) != -1)
	{
		res = res * blen + where_is(*nbrp, base);
		nbrp++;
	}
	return (res * sign);
}

void	base_calc(char *res, unsigned int ten_base, char *base, int blen)
{
	char	*red;

	red = res + digit_num(ten_base, blen) - 1;
	while (red >= res)
	{
		*red = base[ten_base % blen];
		ten_base /= blen;
		red--;
	}
}

void	ft_putnbr_base(char *res, int ten_base, char *base, int blen)
{
	if (ten_base < 0)
	{
		*res = '-';
		res++;
		ten_base *= -1;
	}
	else if (ten_base == 0)
	{
		*res = base[0];
		return ;
	}
	base_calc(res, ten_base, base, blen);
}	

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		bflen;
	int		btlen;
	int		ten_base;
	char	*res;

	bflen = base_check_get_len(base_from);
	btlen = base_check_get_len(base_to);
	if (bflen == -1 || btlen == -1)
		return (NULL);
	ten_base = ft_atoi_base(nbr, base_from, bflen);
	if (ten_base < 0)
		res = (char *)malloc((digit_num(ten_base, btlen) + 2) * sizeof(char));
	else
		res = (char *)malloc((digit_num(ten_base, btlen) + 1) * sizeof(char));
	ft_putnbr_base(res, ten_base, base_to, btlen);
	if (ten_base < 0)
		res[digit_num(ten_base, btlen) + 1] = '\0';
	else
		res[digit_num(ten_base, btlen)] = '\0';
	return (res);
}
