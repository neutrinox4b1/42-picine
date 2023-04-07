/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:04:26 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/15 17:17:43 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ctox(unsigned char c)
{
	write(1, "\\", 1);
	write(1, &("0123456789abcdef"[c / 16]), 1);
	write(1, &("0123456789abcdef"[c % 16]), 1);
	return ;
}

void	ft_putstr_non_printable(char *str)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
	{
		if (is_printable(*sp))
		{
			write(1, sp, 1);
		}
		else
		{
			ctox(*sp);
		}
		sp++;
	}
	return ;
}
