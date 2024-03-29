/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 00:54:26 by mzarhou           #+#    #+#             */
/*   Updated: 2022/08/02 20:53:29 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"

t_tree	*ft_new_tree_node(void *content)
{
	t_tree	*node;

	node = malloc(sizeof(t_tree));
	if (! node)
		exit(1);
	node->content = content;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

static void	ft_free_node(t_tree *tree, void (*free_content)(void *content))
{
	t_tree	*left;
	t_tree	*rigth;

	if (! tree)
		return ;
	left = tree->left;
	rigth = tree->right;
	ft_free_node(left, free_content);
	ft_free_node(rigth, free_content);
	if (free_content)
		free_content(tree->content);
	free(tree);
}

void	ft_tree_clear(t_tree **tree_ptr, void (*free_content)(void *content))
{
	t_tree	*tree;

	if (! tree_ptr)
		return ;
	tree = *tree_ptr;
	ft_free_node(tree, free_content);
	*tree_ptr = NULL;
}
