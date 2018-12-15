/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:18:32 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/20 15:18:34 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else if (argc < 2)
		ft_putstr(2, "File name missing.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		ft_display_file(fd);
		if (close(fd) == -1)
			return (0);
	}
	return (0);
}
