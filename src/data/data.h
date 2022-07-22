/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:54:36 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/22 22:24:46 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include "list/list.h"
# include "tree/tree.h"
# include <stdlib.h>

int	g_exit_status;

// single source of truth
typedef struct s_data	t_data;

struct s_data
{
	t_list			*tokens;
	struct s_tree	*tree;
};

void	ft_destroy_data(t_data *data);
void	ft_init_data(t_data *data);

#endif
