/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:41:10 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/19 18:57:16 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	res;

	if (nb >= 13 || nb < 0)
		return (0);
	res = 1;
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
