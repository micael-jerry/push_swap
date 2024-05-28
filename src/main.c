/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:13:47 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 13:55:37 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_list_a(int argc, char const *argv[])
{
	t_list	*list_a;
	int		i;
	int		*content;

	i = 1;
	while (i < argc)
	{
		content = (int *)malloc(sizeof(int));
		if (!content)
		{
			ft_lstclear(&list_a, &free);
			return (NULL);
		}
		*content = ft_atoi(argv[i]);
		ft_lstadd_back(&list_a, ft_lstnew(content));
		i++;
	}
	return (list_a);
}

int	main(int argc, char const *argv[])
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
		return (0);
	list_a = init_list_a(argc, argv);
	list_b = NULL;
	list_status(list_a, list_b);
	return (0);
}
