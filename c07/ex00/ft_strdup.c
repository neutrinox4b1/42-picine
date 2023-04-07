/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:55:45 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/25 14:52:03 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	my_strlen(char *str)
{
	char	*sp;
	int		cnt;

	sp = str;
	cnt = 0;
	while (*sp != '\0')
	{
		cnt++;
		sp++;
	}
	return (cnt);
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

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = NULL;
	dup = (char *)malloc((my_strlen(src) + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	my_strcpy(dup, src);
	return (dup);
}
