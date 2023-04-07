/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:31:55 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/17 17:20:44 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dp;
	char			*sp;
	unsigned int	cnt;

	dp = dest;
	sp = src;
	cnt = 0;
	while (cnt < n)
	{
		if (*sp == '\0')
		{
			*dp = '\0';
		}
		else
		{
			*dp = *sp;
			sp++;
		}
		dp++;
		cnt++;
	}
	return (dest);
}
