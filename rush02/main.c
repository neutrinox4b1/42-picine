/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 23:58:24 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 01:47:32 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
//#include "dict.h"

typedef struct	s_dict
{
	char	*key;
	char	*value;
}	t_dict;

int	arg_valid(int argc, char **argv, char **dic_name)
{
	if (argc == 2)
		*dic_name = "numbers.dict";
	else if (argc == 3)
		dic_name = argv[1];
	else
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*dic_name;
	long long	dic_len;
	t_dict	*drr;

	if (!arg_valid(argc, argv, &dic_name))
	{
		my_putstr("Error\n");
		return (-1);
	}
	dic_len = get_dlen(dic_name);
	if (dic_len == -1)
		return (-1);
	drr = get_dict(dic_name);
	if (drr == NULL)
	{
		my_putstr("Error\n");
		return (-1);
	}


	return 0;
}

