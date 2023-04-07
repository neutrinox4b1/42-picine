/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:39:45 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/14 19:47:45 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char		*sp;
	const char	low_offset = 'a' - 'A';

	sp = str;
	while (*sp != '\0')
	{
		if (*sp >= 'A' && *sp <= 'Z')
		{
			*sp += low_offset;
		}
		sp++;
	}
	return (str);
}
