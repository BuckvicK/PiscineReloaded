/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:48:27 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/20 16:36:43 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_swap(char **s1, char **s2, int *fl)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
	*fl = 1;
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		fl;

	fl = 0;
	i = 0;
	while (++i < argc - 1)
	{
		j = i - 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&(argv[i]), &(argv[j]), &fl);
			if (fl == 1)
			{
				fl = 0;
				j = i;
			}
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
