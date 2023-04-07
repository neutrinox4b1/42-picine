/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:53:48 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/14 12:55:54 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		only_upper;
	char	*sp;

	sp = str;
	only_upper = 1;
	while (*sp != '\0')
	{
		if (!(*sp >= 'A' && *sp <= 'Z'))
		{
			only_upper = 0;
			break ;
		}
		sp++;
	}
	return (only_upper);
}
