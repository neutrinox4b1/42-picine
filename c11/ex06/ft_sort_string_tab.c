/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:43:05 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 23:09:57 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_strcmp(char *s1, char *s2)
{
	unsigned char	*sp1;
	unsigned char	*sp2;

	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	while (*sp1 != '\0' || *sp2 != '\0')
	{
		if (*sp1 != *sp2)
			return (*sp1 - *sp2);
		sp1++;
		sp2++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (tab[i] != (void *)0)
	{
		j = i + 1;
		while (tab[j] != (void *)0)
		{
			if (my_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return ;
}
