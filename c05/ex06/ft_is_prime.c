/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:34:07 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/19 16:15:00 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb < 2)
		return (0);
	i = 2;
	is_prime = 1;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			is_prime = 0;
			break ;
		}
		i++;
	}
	return (is_prime);
}
