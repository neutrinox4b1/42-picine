/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:53:16 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/16 18:10:11 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	can_be_word(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*sp;
	int		capital_flag;

	sp = str;
	capital_flag = 1;
	while (*sp != '\0')
	{
		if (can_be_word(*sp))
		{
			if (capital_flag && (*sp >= 'a' && *sp <= 'z'))
				*sp += 'A' - 'a';
			else if (!capital_flag && (*sp >= 'A' && *sp <= 'Z'))
				*sp += 'a' - 'A';
			capital_flag = 0;
		}
		else
		{
			capital_flag = 1;
		}
		sp++;
	}
	return (str);
}
