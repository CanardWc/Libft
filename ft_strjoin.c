/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 04:30:26 by fgrea             #+#    #+#             */
/*   Updated: 2016/11/20 22:01:48 by fgrea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		y;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	y = ft_strlen(s2);
	if ((s3 = (char *)malloc(sizeof(s3) * (i + y + 1))) == NULL)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		s3[i] = s2[y];
		i++;
		y++;
	}
	s3[i] = '\0';
	return (s3);
}
