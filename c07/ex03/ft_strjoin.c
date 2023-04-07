/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:53:39 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/24 13:44:04 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	my_strlen(char *str)
{
	char	*sp;
	int		len;

	len = 0;
	sp = str;
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
	*dp = '\0';
	return (dst);
}

int	get_res_len(int size, char **strs, char *sep)
{
	int	res_len;
	int	str_cnt;

	res_len = 0;
	str_cnt = 0;
	while (str_cnt < size)
		res_len += my_strlen(strs[str_cnt++]);
	if (size > 0)
		res_len += (size - 1) * my_strlen(sep) + 1;
	return (res_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		idx;
	int		str_cnt;
	char	*res;
	int		res_len;

	res_len = get_res_len(size, strs, sep);
	res = (char *)malloc(res_len * sizeof(char));
	str_cnt = 0;
	idx = 0;
	while (idx < res_len - 1)
	{
		my_strcpy(&res[idx], strs[str_cnt]);
		idx += my_strlen(strs[str_cnt]);
		if (idx < res_len - 1)
		{
			my_strcpy(&res[idx], sep);
			idx += my_strlen(sep);
		}
		str_cnt++;
	}
	return (res);
}
