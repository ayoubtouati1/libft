/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:40:51 by atouati           #+#    #+#             */
/*   Updated: 2021/11/15 19:11:36 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					j;
	unsigned long long	k;

	i = 0;
	k = 0;
	j = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\r')
		|| (str[i] == '\n') || (str[i] == '\f') || (str[i] == '\v'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = (k * 10) + str[i] - '0';
		if (k >= 9223372036854775807)
		{
			if (j == -1)
				return (0);
			else
				return (-1);
		}
		i++;
	}
	return ((int)k * j);
}

//int main()
//{
//	printf("%d\n", ft_atoi("-922337206536854775807874654"));
//	printf("%d\n", atoi("-922337206536854775807874654"));
//}