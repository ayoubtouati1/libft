/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:44:16 by atouati           #+#    #+#             */
/*   Updated: 2021/11/19 21:55:40 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub_str;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (len-- && start < ft_strlen(s))
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
//
//int main()
//{
//printf("%s", ft_substr("Ayoub touati", 6, 6));
//}