/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:10:50 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/22 16:56:54 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*sp;

	if (argc == 1)
	{
		sp = argv[0];
		while (*sp != '\0')
		{
			write(1, sp, 1);
			sp++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
