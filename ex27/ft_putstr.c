/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:18:21 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/20 15:18:23 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_putstr(int target, char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
		ft_putchar(target, *(str + i++));
}
