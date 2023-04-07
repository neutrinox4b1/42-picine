/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:23:02 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/25 15:15:12 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	char	*cp;

	cp = charset;
	while (*cp != '\0')
	{
		if (*cp == c)
			return (1);
		cp++;
	}
	return (0);
}

int	myslen(char *str, char *charset)
{
	char	*sp;
	int		len;

	sp = str;
	len = 0;
	while (!is_charset(*sp, charset) && *sp != '\0')
	{
		len++;
		sp++;
	}
	return (len);
}

char	*myscpy(char *dst, char *src, char *charset)
{
	char	*dp;
	char	*sp;

	dp = dst;
	sp = src;
	while (!is_charset(*sp, charset) && *sp != '\0')
	{
		*dp = *sp;
		dp++;
		sp++;
	}
	*dp = '\0';
	return (dst);
}

int	wc(char *str, char *charset)
{
	int	wcnt;
	int	i;

	i = 0;
	wcnt = 0;
	while (str[i] != '\0')
	{
		if (!is_charset(str[i], charset))
		{
			i += myslen(&str[i], charset) - 1;
			wcnt++;
		}
		i++;
	}
	return (wcnt);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;

	res = (char **)malloc((wc(str, charset) + 1) * sizeof(char *));
	i = 0;
	while (*str != '\0')
	{
		if (!is_charset(*str, charset))
		{
			res[i] = (char *)malloc((myslen(str, charset) + 1) * sizeof(char));
			myscpy(res[i], str, charset);
			i++;
			str += myslen(str, charset) - 1;
		}
		str++;
	}
	res[i] = NULL;
	return (res);
}
