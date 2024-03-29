/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 07:14:05 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/01 00:53:58 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H
# include <stdlib.h>

typedef struct s_tree	t_tree;

struct s_tree
{
	void	*content;
	t_tree	*left;
	t_tree	*right;
};

t_tree	*ft_new_tree_node(void *content);
void	ft_tree_clear(t_tree **tree_ptr, void (*free_content)(void *content));
void	ft_each_tree(t_tree *tree, void (*f)(t_tree *));

#endif
