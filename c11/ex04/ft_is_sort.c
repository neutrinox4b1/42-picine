/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:21:22 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 15:23:22 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	upsort;
	int	dnsort;
	int	i;

	upsort = 0;
	dnsort = 0;
	i = 0;
	while (i < length - 1)
	{
		if (upsort == 0 && dnsort == 0)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				upsort = 1;
			else if (f(tab[i], tab[i + 1]) > 0)
				dnsort = 1;
		}
		else if (upsort && f(tab[i], tab[i + 1]) > 0)
			return (0);
		else if (dnsort && f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
