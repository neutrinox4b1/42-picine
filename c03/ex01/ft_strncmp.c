/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:31:47 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/17 16:10:41 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char			*p1;
	unsigned char			*p2;
	unsigned int			cnt;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	cnt = 0;
	while ((*p1 != '\0' || *p2 != '\0') && cnt < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		cnt++;
	}
	return (0);
}
