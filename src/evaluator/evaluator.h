/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 07:04:50 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/05 11:35:25 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALUATOR_H
# define EVALUATOR_H

# include "tree/tree.h"
# include "token/token.h"
# include "arr_utils/arr_utils.h"
# include "utils/utils.h"
# include "libft/libft.h"
# include <unistd.h>
# include "str_utils/str_utils.h"
# include "lexer/lexer.h"

void	ft_expand_expression(t_token *token, char **argenv);
void	ft_evaluator(t_tree	*tree, char **argenv);
void	ft_merge_tokens(t_token *token);
void	ft_expand_double_qoutes(t_token *token, char **env);
void	ft_execute(char **command, char **argenv);
char	*ft_evaluate_var(char *var , char **env);
void	ft_expand_expression_list(t_list *tokens, char **argenv);

#endif
