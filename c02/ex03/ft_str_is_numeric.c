/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:57:09 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/13 23:08:22 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	*sp;
	int		is_numeric;

	is_numeric = 1;
	sp = str;
	while (*sp != '\0')
	{
		if (!(*sp >= '0' && *sp <= '9'))
		{
			is_numeric = 0;
			break ;
		}
		sp++;
	}
	return (is_numeric);
}
