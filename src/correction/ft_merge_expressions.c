/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_expressions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:12:52 by mzarhou           #+#    #+#             */
/*   Updated: 2022/08/03 03:35:14 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "correction.h"
#include "list/list.h"
#include "utils/utils.h"

static int	ft_check_expression(t_list *tokens)
{
	t_type	token_type;

	if (! tokens)
		return (0);
	token_type = ft_get_token_type(tokens);
	if (
		token_type == EXPRESSION
		|| token_type == SING_QUOT
		|| token_type == DOUB_QUOT
		|| token_type == VAR
		|| token_type == STAR
	)
		return (1);
	return (0);
}

static t_list	*ft_next_token(t_list *tokens)
{
	t_list	*temp;

	temp = tokens;
	while (ft_check_expression(tokens))
		tokens = tokens->next;
	if (temp && temp == tokens)
		return (tokens->next);
	return (tokens);
}

static t_list	*ft_merge_expressions(t_list *tokens)
{
	t_list	*value;
	t_list	*next;
	t_list	*detached_el;
	t_token	*new_token;

	value = NULL;
	while (ft_check_expression(tokens))
	{
		next = tokens->next;
		detached_el = ft_lstdetach(tokens);
		ft_lstadd_back(&value, detached_el);
		tokens = next;
	}
	new_token = ft_new_token(value, EXPRESSION);
	new_token->is_list = 1;
	return (ft_lstnew(new_token));
}

void	ft_merge_expressions_wrapper(t_list **tokens_ptr)
{
	t_list	*new_token;
	t_list	*tokens;
	t_list	*next_token;
	t_list	*prev;

	if (! tokens_ptr || ! *tokens_ptr)
		return ;
	tokens = *tokens_ptr;
	while (tokens)
	{
		next_token = ft_next_token(tokens);
		if (next_token != tokens->next)
		{
			prev = tokens->prev;
			new_token = ft_merge_expressions(tokens);
			ft_lstpush_after(prev, new_token);
			if (! prev)
				*tokens_ptr = new_token;
			new_token->next = next_token;
			if (next_token)
				next_token->prev = new_token;
		}
		tokens = next_token;
	}
}
