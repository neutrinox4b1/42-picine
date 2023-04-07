/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 01:25:01 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 02:15:59 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	splen(char *str)
{
	char	*sp;
	int		len;

	sp  = str;
	len = 0;
	while (*sp != '\0' && *sp != '\n')
	{
		sp++;
		len++;
	}
	return (len);
}

void	spcpy(char *dst, char *src)
{
	char	*dp;
	char	*sp;

	dp = dst;
	sp = src;
	while (*sp != '\0' && *sp != '\n')
	{
		*dp = *sp;
		dp++;
		sp++;
	}
	*dp = '\0';
	return ;
}

int	lc(char *all_dict)
{
	int	lcnt;
	int	i;

	lcnt = 0;
	i = 0;
	while (all_dict[i] != '\0')
	{
		if (all_dict[i] != '\n')
		{
			i += splen(&all_dict[i]) - 1;
			lcnt++;
		}
		i++;
	}
	return (lcnt);
}

char	**split_dict(char *all_dict, int *lcnt)
{
	char	**res;
	int		i;

	*lcnt = lc(all_dict);
	res = (char **)malloc((*lcnt) * sizeof(char *));
	i = 0;
	while (*all_dict != '\0')
	{
		if(*all_dict != '\n')
		{
			res[i] = (char *)malloc((splen(all_dict) + 1) * sizeof(char));
			spcpy(res[i], all_dict);
			i++;
			all_dict += splen(all_dict) - 1;
		}
		all_dict++;
	}
	return (res);
}
