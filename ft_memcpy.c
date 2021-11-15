/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:52:45 by atouati           #+#    #+#             */
/*   Updated: 2021/11/14 16:12:47 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*serc;
	unsigned char	*dest;

	serc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	while ((dest || serc) && n > i)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dst);
}
