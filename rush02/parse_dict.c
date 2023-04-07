/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:02:50 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/29 02:35:17 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include<stdio.h>

char	**split_dict(char *all_dict);

typedef struct	s_dict
{
	char	*key;
	char	*value;
}	t_dict;

long long	get_dlen(char *dic_name)
{
	int			fd;
	long long	len;
	char		buf;

	fd = open(dic_name, O_RDONLY);
	len = 0;
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	while (read(fd, &buf, 1))
		len++;
	close(fd);
	return (len);
}

void	free_all(char *all_dict, char **sp_dict, int lcnt)
{
	int	i;

	i = 0;
	free(all_dict);
	while (i < lcnt)
	{
		free(sp_dict[i]);
		i++;
	}
	free(sp_dict[i]);
	free(sp_dict);
}

t_dict	*get_kv(char **sp_dict, int lcnt)
{
	t_dict	*res;
	int	i;

	res = (t_dict *)malloc(lcnt * sizeof(t_dict));
	i = 0;
	while (i < lcnt)
	{
		
		i++;	
	}
}

t_dict	*get_dict(char	*dic_name, long long dic_len)
{
	char		*all_dict;
	char		**sp_dict;
	t_dict		*res;
	int			fd;
	int			lcnt;

	all_dict = (char *)malloc((dic_len + 1) * sizeof(char));
	fd = open(dic_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, all_dict, dic_len);
	close(fd);
	all_dict[dic_len] = '\0';
	sp_dict = split_dict(all_dict, &lcnt);
	res = get_kv(sp_dict, lcnt);
	if (res == NULL)
		return (NULL);
	free_all(all_dict, sp_dict, lcnt);	
	return (res);
}


int main(void)
{
	get_dict("numbers.dict", get_dlen("numbers.dict"));
	return 0;
}
