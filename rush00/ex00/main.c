/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:04:22 by jelee2            #+#    #+#             */
/*   Updated: 2023/01/15 13:30:36 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	my_atoi(char *str)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		ret *= -1;
	return (ret);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	rush(my_atoi(argv[1]), my_atoi(argv[2]));
	return (0);
}
