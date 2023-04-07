/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:43:52 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/13 22:56:27 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		only_alpha;
	char	*sp;

	only_alpha = 1;
	sp = str;
	while (*sp != '\0')
	{
		if (!((*sp >= 'a' && *sp <= 'z') || (*sp >= 'A' && *sp <= 'Z')))
		{
			only_alpha = 0;
			break ;
		}
		sp++;
	}
	return (only_alpha);
}
