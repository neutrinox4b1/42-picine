/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:52:14 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 22:17:15 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	calc_plus(int v1, int v2)
{
	return (v1 + v2);
}

int	calc_minus(int v1, int v2)
{
	return (v1 - v2);
}

int	calc_mul(int v1, int v2)
{
	return (v1 * v2);
}

int	calc_div(int v1, int v2)
{
	return (v1 / v2);
}

int	calc_mod(int v1, int v2)
{
	return (v1 % v2);
}
