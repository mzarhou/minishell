/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 02:16:11 by mzarhou           #+#    #+#             */
/*   Updated: 2022/06/30 06:23:44 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "data/data.h"
#include "token/token.h"
#include "lexer/lexer.h"
#include "list/list.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "parser/parser.h"
#include "utils/utils.h"
#include "correction/correction.h"

int main()
{
	t_data	data;
	char	*s = "> file1 > fie2 << end ls < f2 >> f20 -al && echo < f00 -n >> f21 | > f001 ls < fff -al > f";
	t_lexer	*lxr;

	ft_init_data(&data);
	while (1)
	{
		s = readline("minishell> ");
		lxr = ft_init_lexer(s);
		data.tokens = ft_lexer(lxr);
		data.tokens = ft_move_redirections(data.tokens);
		printf("\n");
		ft_print_list_values(data.tokens);
		printf("\n");
		// ft_print_list_values_reverse(data.tokens);
		data.tree = ft_parser(data.tokens);
		print_tree(data.tree);
		ft_destroy_lexer(lxr);
		ft_destroy_data(&data);
	}
}
