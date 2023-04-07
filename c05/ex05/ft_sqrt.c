/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:07:53 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/22 16:58:36 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned long long	res;
	unsigned long long	unb;

	if (nb < 0)
		return (0);
	unb = nb;
	res = 1;
	while (res <= unb / res)
	{
		if (res * res == unb)
			return (res);
		res++;
	}
	return (0);
}
