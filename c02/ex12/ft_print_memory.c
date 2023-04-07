/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:27:58 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/16 18:05:58 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(void *addr)
{
	int					digit;
	unsigned long long	hex_div;

	hex_div = 0x1000000000000000;
	while (hex_div)
	{
		digit = (((unsigned long long) addr) / hex_div) % 0x10;
		write(1, &"0123456789abcdef"[digit], 1);
		hex_div /= 0x10;
	}
	write(1, ":", 1);
	return ;
}

void	print_ctox(unsigned char *addr, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < size)
	{
		if (cnt % 2 == 0)
			write(1, " ", 1);
		write(1, &"0123456789abcdef"[addr[cnt] / 16], 1);
		write(1, &"0123456789abcdef"[addr[cnt] % 16], 1);
		cnt++;
	}
	while (cnt < 0x10)
	{
		if (cnt % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		cnt++;
	}
	return ;
}

void	print_str(unsigned char *addr, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	write(1, " ", 1);
	while (cnt < size)
	{
		if (addr[cnt] >= 32 && addr[cnt] <= 126)
			write(1, &addr[cnt], 1);
		else
			write(1, ".", 1);
		cnt++;
	}
	return ;
}

void	print_content(void *addr, unsigned int size)
{
	print_ctox(addr, size);
	print_str(addr, size);
	return ;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	line_cnt;
	unsigned int	rest_size;
	void			*p_addr;

	line_cnt = 0;
	rest_size = size;
	while (line_cnt < ((size + 0xf) / 0x10))
	{
		p_addr = addr + 0x10 * line_cnt;
		print_addr(p_addr);
		if (rest_size >= 0x10)
		{
			print_content(p_addr, 0x10);
			rest_size -= 0x10;
		}
		else
		{
			print_content(p_addr, rest_size);
			rest_size = 0;
		}
		write(1, "\n", 1);
		line_cnt++;
	}
	return (addr);
}
