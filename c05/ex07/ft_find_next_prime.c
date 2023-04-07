/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:22 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/19 17:20:27 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	is_prime;

	if (nb < 2)
		i = 2;
	else
		i = nb;
	while (1)
	{
		j = 2;
		is_prime = 1;
		while (j <= i / j)
		{
			if (i % j == 0)
			{
				is_prime = 0;
				break ;
			}
			j++;
		}
		if (is_prime)
			return (i);
		i++;
	}
}
