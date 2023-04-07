/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:44:47 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/14 12:51:25 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		only_lower;
	char	*sp;

	only_lower = 1;
	sp = str;
	while (*sp != '\0')
	{
		if (!(*sp >= 'a' && *sp <= 'z'))
		{
			only_lower = 0;
			break ;
		}
		sp++;
	}
	return (only_lower);
}
