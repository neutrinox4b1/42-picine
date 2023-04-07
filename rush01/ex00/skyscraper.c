/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunlee2 <seunlee2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:29:29 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/24 14:17:33 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		u_view_cnt(int *board, int idx);
int		d_view_cnt(int *board, int idx);
int		l_view_cnt(int *board, int idx);
int		r_view_cnt(int *board, int idx);
void	ft_print(int *board);

int	udlr_fail(int *udlr, int *board, int idx)
{
	int			row;
	int			col;

	row = idx / 4;
	col = idx % 4;
	if (u_view_cnt(board, idx) != udlr[4 * 0 + col])
		return (1);
	else if (d_view_cnt(board, idx) != udlr[4 * 1 + col])
		return (1);
	else if (l_view_cnt(board, idx) != udlr[4 * 2 + row])
		return (1);
	else if (r_view_cnt(board, idx) != udlr[4 * 3 + row])
		return (1);
	else
		return (0);
}

int	is_dup(int *board, int idx, int num)
{
	int	i;

	i = (idx / 4) * 4;
	while (i < (idx / 4) * 4 + 4)
	{
		if (board[i] == num)
		{
			return (1);
		}
		i++;
	}
	i = idx % 4;
	while (i < 16)
	{
		if (board[i] == num)
		{
			return (1);
		}
		i += 4;
	}
	return (0);
}

void	udlr_check(int *udlr, int *board, int *is_solved)
{
	int	idx;
	int	is_valid;

	is_valid = 1;
	idx = 0;
	while (idx < 16)
	{
		if (udlr_fail(udlr, board, idx))
		{
			is_valid = 0;
			break ;
		}
		idx += 5;
	}
	if (is_valid)
	{
		ft_print(board);
		*is_solved = 1;
	}
}

void	skyscraper(int *udlr, int *board, int idx, int *is_solved)
{
	int	num;

	num = 1;
	if (*is_solved)
		return ;
	while (num <= 4)
	{
		if (!is_dup(board, idx, num))
		{
			board[idx] = num;
			if (idx == 15)
				udlr_check(udlr, board, is_solved);
			else
				skyscraper(udlr, board, idx + 1, is_solved);
		}
		num++;
	}
	board[idx] = 0;
	return ;
}
