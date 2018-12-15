/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:30:22 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/19 21:37:24 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*rang;
	int		i;

	if (max <= min)
		return (NULL);
	rang = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		rang[i] = min + i;
		i++;
	}
	return (rang);
}
