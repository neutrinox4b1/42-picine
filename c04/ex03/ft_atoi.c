/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:29:38 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/20 18:50:20 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	char	*sp;
	int		res;
	int		sign;

	sp = str;
	res = 0;
	sign = 1;
	while (is_space(*sp))
		sp++;
	while (*sp == '+' || *sp == '-')
	{
		if (*sp == '-')
			sign *= -1;
		sp++;
	}
	while (is_number(*sp))
	{
		res = res * 10 + (*sp - '0');
		sp++;
	}
	return (res * sign);
}
