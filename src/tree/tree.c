#include "tree.h"

t_tree	*ft_new_tree_node(void *content)
{
	t_tree	*node;

	node = malloc(sizeof(t_tree));
	node->content = content;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

void	ft_free_node(t_tree *tree)
{
	t_tree	*left;
	t_tree	*rigth;

	if (! tree)
		return ;
	left = tree->left;
	rigth = tree->right;
	ft_free_node(left);
	ft_free_node(rigth);
	free(tree);
}

void	ft_tree_clear(t_tree **tree_ptr)
{
	t_tree *tree;

	if (! tree_ptr)
		return ;
	tree = *tree_ptr;
	ft_free_node(tree);
	*tree_ptr = NULL;
}