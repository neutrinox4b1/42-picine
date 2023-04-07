/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:56:49 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/15 22:37:41 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		is_printable;
	char	*sp;

	sp = str;
	is_printable = 1;
	while (*sp != '\0')
	{
		if (!(*sp >= 32 && *sp <= 126))
		{
			is_printable = 0;
			break ;
		}
		sp++;
	}
	return (is_printable);
}
