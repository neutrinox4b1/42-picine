/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:38:25 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/31 14:29:17 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_string.h"

int	my_strlen(char *str)
{
	char	*sp;
	int		len;

	sp = str;
	len = 0;
	while (*sp != '\0')
	{
		sp++;
		len++;
	}
	return (len);
}

void	my_strcpy(char *dst, char *src)
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
	return ;
}

int	my_linelen(char	*str)
{
	char	*sp;
	int		len;

	sp = str;
	len = 0;
	while (*sp != '\0' && *sp != '\n')
	{
		sp++;
		len++;
	}
	return (len);
}

void	my_linecpy(char *dst, char *src)
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
	return ;
}

int	my_linetoi(char	*str, int n)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < n)
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			return (-1);
		i++;
	}
	return (res);
}
