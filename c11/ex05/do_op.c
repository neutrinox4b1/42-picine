/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:32:50 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 22:19:51 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_string.h"
#include "calc.h"

char	operator_valid(char *op)
{
	if (my_strlen(op) != 1)
		return ('\0');
	if (*op == '+')
		return ('+');
	else if (*op == '-')
		return ('-');
	else if (*op == '*')
		return ('*');
	else if (*op == '/')
		return ('/');
	else if (*op == '%')
		return ('%');
	else
		return ('\0');
}

int	select_calc(int v1, int v2, char op)
{
	int	(*fp[5])(int, int);

	fp[0] = calc_plus;
	fp[1] = calc_minus;
	fp[2] = calc_mul;
	fp[3] = calc_div;
	fp[4] = calc_mod;
	if (op == '+')
		return (fp[0](v1, v2));
	else if (op == '-')
		return (fp[1](v1, v2));
	else if (op == '*')
		return (fp[2](v1, v2));
	else if (op == '/')
		return (fp[3](v1, v2));
	else if (op == '%')
		return (fp[4](v1, v2));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		v1;
	int		v2;
	char	op;
	int		res;

	if (argc != 4)
		return (-1);
	v1 = my_atoi(argv[1]);
	v2 = my_atoi(argv[3]);
	op = operator_valid(argv[2]);
	if (op == '/' && v2 == 0)
	{
		my_putstr("Stop : division by zero\n");
		return (-1);
	}
	else if (op == '%' && v2 == 0)
	{
		my_putstr("Stop : modulo by zero\n");
		return (-1);
	}
	res = select_calc(v1, v2, op);
	my_putnbr(res);
	my_putstr("\n");
	return (0);
}
