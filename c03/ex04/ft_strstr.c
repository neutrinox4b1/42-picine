/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:19:17 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/16 21:20:37 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_strcmp(char *s1, char *to_find)
{
	char	*p1;
	char	*p2;

	p1 = s1;
	p2 = to_find;
	while (*p2 != '\0')
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
	{
		if (!my_strcmp(sp, to_find))
		{
			return (sp);
		}
		sp++;
	}
	if (to_find[0] == '\0')
		return (str);
	else
		return (0);
}
