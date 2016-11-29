/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:41:53 by fgrea             #+#    #+#             */
/*   Updated: 2016/11/21 17:37:58 by fgrea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>

int		get_next_line(const int fd, char **line);

int		main(int argc, char **argv)
{
	char	**lol = NULL;
	int		fd;
	int 	r;

	fd = open("testxt", O_RDONLY);

	r = 1;
	while (r == 1)
	{
		r = get_next_line(fd, lol);
		printf("%s\n", *lol);
	}
	return (0);
}
