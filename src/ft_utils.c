/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:17:42 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 10:59:37 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void put_error()
{
	ft_putendl_fd("Error", 1);
	exit(0);
}

char	**ft_get_arg_val(int argc, char const *argv[], int *argv_init_index)
{
	if (argc == 2)
		return (*argv_init_index = 0, ft_split(argv[1], ' '));
	return (*argv_init_index = 1, (char **) argv);
}
