/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:25:13 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 02:30:38 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putstr(char *str)
{
	char	*sp;

	sp = str;
	while (*sp != '\0')
		write(1, sp++, 1);
	return ;
}

int	my_isspace(char c)
{
	if ((c >= 9 &&c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	my_strlen(char *str)
{
	char	*sp;*

	sp = str;
	while (*sp != '\0')
	{
		sp++ 
