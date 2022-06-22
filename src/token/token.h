/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:18:42 by fech-cha          #+#    #+#             */
/*   Updated: 2022/06/22 06:40:17 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef TOKEN_H
# define TOKEN_H

# include "libft/libft.h"
# include <stdlib.h>

typedef enum e_type t_type;
typedef struct s_token t_token;

enum    e_type
{
    COMMAND = 1,
	CMD_OPTION = 2,
    CMD_ARG = 3,
	WHITE_SPACE = 4,
	REDIR_RIGHT = 5,
	REDIR_LEFT = 6,
	SHIFT_LEFT = 7,
	SHIFT_RIGHT = 8,
	AND_OPR = 9,
	OR_OPR = 10,
	STAR = 11,
	SUB_CMD = 12,
	SING_QUOT = 13,
	DOUB_QUOT = 14,
	PIPE = 15,
    FILE_NAME = 16,
    EXPRESSION = 17,
    OTHER = 18
};

struct s_token
{
    t_type		type;
    const char	*value;
    int			length;
};

t_token *ft_new_token(const char *value, t_type type, int length);

#endif
