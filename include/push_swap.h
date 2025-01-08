/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:10:24 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/08 17:04:28 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"

typedef struct s_list_int
{
	int				value;
	struct s_list_int	*next;
}				t_list_int;

t_list_int	*ft_lstintnew(int value);
t_list_int	*ft_lstintlast(t_list_int *lst_one);
void	ft_lstintadd_front(t_list_int **lst, t_list_int *new);
void	ft_lstintadd_back(t_list_int **lst, t_list_int *new);
int		ft_lstintsize(t_list_int *lst_one);

int		ft_is_sorted(t_list_int **list);
int		ft_is_duplicate(t_list_int **list);

void	ft_swap_a(t_list_int **list_a);
void	ft_swap_b(t_list_int **list_b);
void	ft_swap_ss(t_list_int **list_a, t_list_int **list_b);

void	ft_push_a(t_list_int **list_a, t_list_int **list_b);
void	ft_push_b(t_list_int **list_a, t_list_int **list_b);

void	ft_rotate_a(t_list_int **list_a);
void	ft_rotate_b(t_list_int **list_b);
void	ft_rotate_rr(t_list_int **list_a, t_list_int **list_b);

void	ft_reverse_rotate_a(t_list_int **list_a);
void	ft_reverse_rotate_b(t_list_int **list_b);
void	ft_reverse_rotate_rr(t_list_int **list_a, t_list_int **list_b);

// FOR TESTING
void	print_list(t_list_int *list);
void	list_status(t_list_int *list_a, t_list_int *list_b);

#endif
