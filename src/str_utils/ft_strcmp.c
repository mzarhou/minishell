/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:39:08 by mzarhou           #+#    #+#             */
/*   Updated: 2022/08/01 00:59:27 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utils.h"

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (-1);
	if (*s1 == *s2)
		while (*s1 && *++s1 == *++s2)
			;
	return (*s1 - *s2);
}
