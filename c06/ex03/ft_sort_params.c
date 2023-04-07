/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:55:04 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/22 22:18:06 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
	{
		write(1, sp, 1);
		sp++;
	}
	return ;
}

int	ft_strcmp(char *s1, char *s2)
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

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return ;
}	

int	main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[j];
					argv[j] = tmp;
				}
				j++;
			}
			i++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
