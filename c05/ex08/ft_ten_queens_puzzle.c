/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:24:29 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/21 12:57:51 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_place(int *place)
{
	char	pc;
	int		idx;

	idx = 0;
	while (idx < 10)
	{
		pc = place[idx] + '0';
		write(1, &pc, 1);
		idx++;
	}
	write(1, "\n", 1);
	return ;
}

int	abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	is_promising(int *place, int col, int row)
{
	int	idx;
	int	pcheck;

	idx = 0;
	pcheck = 1;
	while (idx < col)
	{
		if ((place[idx] == row || abs(idx - col) == abs(place[idx] - row)))
		{
			pcheck = 0;
			break ;
		}
		idx++;
	}
	return (pcheck);
}

void	put_queen(int remain, int *place, int *cnt)
{
	int	col;
	int	row;

	if (remain == 0)
	{
		(*cnt)++;
		print_place(place);
		return ;
	}
	row = 0;
	col = 10 - remain;
	while (row < 10)
	{
		if (is_promising(place, col, row))
		{
			place[col] = row;
			put_queen(remain - 1, place, cnt);
		}
		row++;
	}
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int	place[10];
	int	cnt;
	int	zero_row;

	cnt = 0;
	zero_row = 0;
	while (zero_row < 10)
	{
		place[0] = zero_row;
		put_queen(9, place, &cnt);
		zero_row++;
	}
	return (cnt);
}
