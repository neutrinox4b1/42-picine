/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:57:54 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/23 16:48:15 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*res;
	int				st_num;
	unsigned int	i;

	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(int));
	st_num = min;
	i = 0;
	while (st_num < max)
	{
		res[i] = st_num;
		i++;
		st_num++;
	}
	return (res);
}
