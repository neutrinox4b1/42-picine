/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunlee2 <seunlee2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:11:12 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/22 12:16:17 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	skyscraper(int *udlr, int *board, int idx, int *is_solved);

int	my_strlen(char *str)
{
	int		len;
	char	*sp;

	sp = str;
	len = 0;
	while (*sp != '\0')
	{
		sp++;
		len++;
	}
	return (len);
}

int	arg_valid(char *arg, int *udlr)
{
	int	arg_idx;
	int	udlr_idx;

	arg_idx = 0;
	udlr_idx = 0;
	if (my_strlen(arg) != 31)
		return (0);
	while (arg_idx < 31)
	{
		if (arg_idx % 2 == 0)
		{
			if ((arg[arg_idx] >= '1' && arg[arg_idx] <= '4'))
			{
				udlr[udlr_idx] = arg[arg_idx] - '0';
				udlr_idx++;
			}
			else
				return (0);
		}
		else if (arg_idx % 2 == 1 && arg[arg_idx] != ' ')
			return (0);
		arg_idx++;
	}
	return (1);
}

void	init_board(int *board, int *is_solved)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		board[i] = 0;
		i++;
	}
	*is_solved = 0;
	return ;
}	

int	main(int argc, char **argv)
{
	int	udlr[16];
	int	board[16];
	int	is_solved;

	if (argc != 2 || !arg_valid(argv[1], udlr))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_board(board, &is_solved);
	skyscraper(udlr, board, 0, &is_solved);
	if (!is_solved)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}	
