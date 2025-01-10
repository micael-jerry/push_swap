/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_validator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:05:40 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/10 22:56:38 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_is_duplicate(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc <= 2)
		return (0);

	i = 1;
	while (i < argc)
	{
		j = i+1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int ft_str_isnum(char const *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void ft_params_validator(int argc, char const *argv[])
{
	int	i;
	long	argv_tmp;

	if (ft_is_duplicate(argc, argv))
		put_error();
	
	i = 1;
	while (i < argc)
	{
		if (!ft_str_isnum(argv[i]))
			put_error();
		argv_tmp = ft_atoi(argv[i]);
		if (argv_tmp < -2147483648 || argv_tmp > 2147483648)
			put_error();
		i++;
	}
}
