/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:09:10 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/15 13:53:44 by kihyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_last_line(int x)
{
	int	x_cnt;

	x_cnt = 0;
	while (x_cnt < x)
	{
		if (x_cnt == 0)
		{
			ft_putchar('A');
		}
		else if (x_cnt == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		x_cnt++;
	}
	ft_putchar('\n');
	return ;
}

void	basic_line(int x)
{
	int	x_cnt;

	x_cnt = 0;
	while (x_cnt < x)
	{
		if (x_cnt == 0 || x_cnt == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		x_cnt++;
	}
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int	y_cnt;

	y_cnt = 0;
	if (x > 0 && y > 0)
	{
		while (y_cnt < y)
		{
			if (y_cnt == 0 || y_cnt == y - 1)
				first_last_line(x);
			else
				basic_line(x);
			y_cnt++;
		}
	}
	return ;
}
