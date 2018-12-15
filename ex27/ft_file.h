/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:16:56 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/20 15:16:59 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(int target, char c);
void	ft_putstr(int target, char *str);
void	ft_display_file(int fd);

#endif
