/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:14:41 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/26 17:18:31 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
	{
		write(1, sp, 1);
		sp++;
	}
	return ;
}

void	ft_putnbr(unsigned int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	t_stock_str	*sp;

	sp = par;
	while (sp->str != NULL)
	{
		ft_putstr(sp->str);
		ft_putstr("\n");
		ft_putnbr(sp->size);
		ft_putstr("\n");
		ft_putstr(sp->copy);
		ft_putstr("\n");
		sp++;
	}
	return ;
}
