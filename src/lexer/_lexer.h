/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _lexer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:18:50 by fech-cha          #+#    #+#             */
/*   Updated: 2022/08/04 02:47:58 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LEXER_H
# define _LEXER_H

# include "lexer.h"

t_type	ft_get_type(t_lexer *lxr);
void	ft_move2_next_token(t_lexer *lxr);
void	ft_handle_diff_matching(
			t_lexer *lxr, char opening_match, char closing_match);
void	ft_handle_matching(t_lexer *lxr, char c);
void	ft_move_content(t_lexer *lxr, int length);
t_type	ft_get_type_of_char(char c);
int		ft_is_whitespace(char c);

#endif
