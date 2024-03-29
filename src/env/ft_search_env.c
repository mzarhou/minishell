/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:20:08 by mzarhou           #+#    #+#             */
/*   Updated: 2022/08/02 22:53:20 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

static int	ft_compare_var_name(char *var_name, char *line)
{
	char	*old_var_name;
	int		result;

	old_var_name = ft_get_var_name(line, NULL);
	result = ft_strcmp(var_name, old_var_name) == 0;
	return (ft_free(old_var_name), result);
}

t_list	*ft_search_env(char *var_name)
{
	t_list	*lst;

	lst = g_.env;
	while (lst)
	{
		if (ft_compare_var_name(var_name, lst->content))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
