/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:54:51 by mzarhou           #+#    #+#             */
/*   Updated: 2022/08/03 03:28:38 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "token/token.h"
#include "utils/utils.h"

void	ft_destroy_data(t_data *data)
{
	if (! data)
		return ;
	ft_lstclear(&data->tokens, &ft_free_token);
	ft_tree_clear(&data->tree, &ft_free_token);
}
