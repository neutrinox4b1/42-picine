/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:21:14 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/17 11:52:58 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	idx;

	dlen = 0;
	slen = 0;
	idx = 0;
	while (dest[dlen] != '\0' && dlen < size)
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (dlen < size)
	{
		while (dlen + idx < size - 1 && src[idx] != '\0')
		{
			dest[dlen + idx] = src[idx];
			idx++;
		}
		dest[dlen + idx] = '\0';
	}
	return (dlen + slen);
}
