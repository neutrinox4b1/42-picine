/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:20:44 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/20 19:10:02 by jelee2           ###   ########.fr       */
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

int	base_error(unsigned char *str)
{
	unsigned char	*sp;
	int				ascii[256];
	int				len;
	int				i;

	len = 0;
	sp = str;
	i = 0;
	while (i < 256)
		ascii[i++] = 0;
	while (*sp != '\0')
	{
		if (*sp == '+' || *sp == '-' || is_space(*sp))
			return (1);
		ascii[*sp]++;
		if (ascii[*sp] >= 2)
			return (1);
		sp++;
		len++;
	}
	if (len <= 1)
		return (1);
	return (0);
}

int	where(unsigned char c, char *base)
{
	int				idx;
	unsigned char	*ubase;

	idx = 0;
	ubase = (unsigned char *)base;
	while (ubase[idx] != '\0')
	{
		if (c == ubase[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int	my_strlen(char *str)
{
	char	*sp;
	int		cnt;

	sp = str;
	cnt = 0;
	while (*sp != '\0')
	{
		sp++;
		cnt++;
	}
	return (cnt);
}

int	ft_atoi_base(char *str, char *base)
{
	char	*sp;
	int		sign;
	int		res;
	int		blen;

	sp = str;
	sign = 1;
	res = 0;
	if (base_error((unsigned char *)base))
		return (0);
	blen = my_strlen(base);
	while (is_space(*sp))
		sp++;
	while (*sp == '+' || *sp == '-')
	{
		if (*sp == '-')
			sign *= -1;
		sp++;
	}
	while (where(*sp, base) != -1)
	{
		res = res * blen + where(*sp, base);
		sp++;
	}
	return (res * sign);
}
