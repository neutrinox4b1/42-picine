/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:32:24 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/27 18:56:07 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit_num(int n, int blen)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		cnt++;
		n /= blen;
	}
	return (cnt);
}

int	where_is(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	base_check_get_len(char *base)
{
	int		ascii[128];
	int		i;
	char	*bp;
	int		len;

	i = 0;
	len = 0;
	bp = base;
	while (i < 128)
		ascii[i++] = 0;
	while (*bp != '\0')
	{
		if (*bp == '+' || *bp == '-' || \
				(*bp >= 9 && *bp <= 13) || *bp == 32)
			return (-1);
		ascii[(int)*bp]++;
		if (ascii[(int)*bp] >= 2)
			return (-1);
		bp++;
		len++;
	}
	if (len <= 1)
		return (-1);
	return (len);
}
