/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:06:11 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/26 14:13:51 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*my_strcpy(char *dst, char *src)
{
	char	*dp;
	char	*sp;

	dp = dst;
	sp = src;
	while (*sp != '\0')
	{
		*dp = *sp;
		dp++;
		sp++;
	}
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*srr;
	int			i;

	srr = NULL;
	srr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!srr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		srr[i].size = my_strlen(av[i]);
		srr[i].str = av[i];
		srr[i].copy = NULL;
		srr[i].copy = malloc((srr[i].size + 1) * sizeof(char));
		if (!srr[i].copy)
			return (NULL);
		my_strcpy(srr[i].copy, av[i]);
		i++;
	}
	srr[i].str = NULL;
	return (srr);
}	
