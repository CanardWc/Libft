/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:13:23 by fgrea             #+#    #+#             */
/*   Updated: 2021/11/09 17:50:05 by fgrea            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (--n > 0 && *(unsigned char *)s != (unsigned char)c)
		s++;
	if (n == 0 && *(unsigned char *)s != (unsigned char)c)
		return (NULL);
	return ((void *)s);
}
