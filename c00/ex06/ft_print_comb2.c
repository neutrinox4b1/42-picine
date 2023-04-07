/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:45:50 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/11 23:15:00 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_print(int arg)
{
	char	res;

	res = '0' + arg / 10 ;
	write(1, &res, 1);
	res = '0' + arg % 10;
	write(1, &res, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			my_print(a);
			write(1, " ", 1);
			my_print(b);
			if (! (a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
