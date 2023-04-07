/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:00:40 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/16 15:18:44 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dp;
	char			*sp;
	unsigned int	cnt;

	dp = dest;
	sp = src;
	cnt = 0;
	while (*dp != '\0')
		dp++;
	while (*sp != '\0' && cnt < nb)
	{
		*dp = *sp;
		dp++;
		sp++;
		cnt++;
	}
	*dp = '\0';
	return (dest);
}
