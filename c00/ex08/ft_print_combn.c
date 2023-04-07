/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:39:41 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/12 18:06:18 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bucket(int *bucket, int size)
{
	int		i;
	char	res;

	i = 0;
	while (i < size)
	{
		res = bucket[i] + '0';
		write(1, &res, 1);
		i++;
	}
	if (!(bucket[0] == 10 - size))
		write(1, ", ", 2);
	return ;
}

void	pick(int *bucket, int size, int cnt)
{
	int	buck_num;
	int	min;

	if (cnt == 0)
	{
		print_bucket(bucket, size);
		return ;
	}
	buck_num = size - cnt;
	if (buck_num == 0)
		min = 0;
	else
		min = bucket[buck_num - 1] + 1;
	while (min < 10)
	{
		bucket[buck_num] = min;
		pick(bucket, size, cnt - 1);
		min++;
	}
}

void	ft_print_combn(int n)
{
	int	bucket[10];

	pick(bucket, n, n);
}
