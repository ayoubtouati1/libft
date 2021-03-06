/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:01:38 by atouati           #+#    #+#             */
/*   Updated: 2021/11/21 21:20:28 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	str = (char *)malloc(((len_s1 + len_s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (i < len_s1)
	{
		str[i] = (char)s1[i];
		i++;
	}
	while (j < len_s2)
		str[i++] = (char)s2[j++];
	str[i] = '\0';
	return (str);
}
