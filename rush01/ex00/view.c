/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:28:26 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/24 14:16:50 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	u_view_cnt(int *board, int idx)
{
	int	col;
	int	i;
	int	view_cnt;
	int	max;

	col = idx % 4;
	i = col;
	view_cnt = 0;
	max = 0;
	while (i < 16)
	{
		if (board[i] > max)
		{
			max = board[i];
			view_cnt++;
		}
		i += 4;
	}
	return (view_cnt);
}

int	d_view_cnt(int *board, int idx)
{
	int	col;
	int	i;
	int	view_cnt;
	int	max;

	col = idx % 4;
	i = 4 * 3 + col;
	view_cnt = 0;
	max = 0;
	while (i >= 0)
	{
		if (board[i] > max)
		{
			max = board[i];
			view_cnt++;
		}
		i -= 4;
	}
	return (view_cnt);
}

int	l_view_cnt(int *board, int idx)
{
	int	row;
	int	i;
	int	view_cnt;
	int	max;

	row = idx / 4;
	i = row * 4;
	view_cnt = 0;
	max = 0;
	while (i < row * 4 + 4)
	{
		if (board[i] > max)
		{
			max = board[i];
			view_cnt++;
		}
		i++;
	}
	return (view_cnt);
}

int	r_view_cnt(int *board, int idx)
{
	int	row;
	int	i;
	int	view_cnt;
	int	max;

	row = idx / 4;
	i = row * 4 + 3;
	view_cnt = 0;
	max = 0;
	while (i >= row * 4)
	{
		if (board[i] > max)
		{
			max = board[i];
			view_cnt++;
		}
		i--;
	}
	return (view_cnt);
}
