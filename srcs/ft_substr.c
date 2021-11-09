/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:49:47 by fgrea             #+#    #+#             */
/*   Updated: 2021/11/09 18:05:45 by fgrea            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*dst;

	if (start >= len)
		dst = (char *)malloc(1 * sizeof(char));
	else
		dst = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !dst)
		return (NULL);
	ret = dst;
	if (start < len)
		while (s[start] && len--)
			*dst++ = s[start++];
	*dst = '\0';
	return (ret);
}
