/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:05:21 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/19 12:23:13 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	cnt;

	res = 1;
	cnt = 0;
	if (power < 0)
		return (0);
	while (cnt < power)
	{
		res *= nb;
		cnt++;
	}
	return (res);
}
