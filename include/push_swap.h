/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:10:24 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 11:53:35 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"

void	ft_swap_a(t_list **list_a);
void	ft_swap_b(t_list **list_b);
void	ft_swap_ss(t_list **list_a, t_list **list_b);

void	ft_push_a(t_list **list_a, t_list **list_b);
void    ft_push_b(t_list **list_a, t_list **list_b);

// FOR TESTING
void	print_list(t_list *list);
void	list_status(t_list *list_a, t_list *list_b);

#endif
