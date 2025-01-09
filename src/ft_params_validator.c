/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_validator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:05:40 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/09 12:12:13 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_duplicate(int argc, char const *argv[])
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

void ft_params_validator(int argc, char const *argv[])
{
	if (ft_is_duplicate(argc, argv))
		put_error();
}
