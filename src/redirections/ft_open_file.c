/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:53:57 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/25 00:18:33 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "redirections.h"

int	ft_open_file(char *file_path, int flags, t_evaluator_data *evaluator_data)
{
	int	fd;

	fd = open(file_path, flags, 0644);
	if (fd == -1)
	{
		ft_putstr_fd("minishell: ", 2);
		ft_putstr_fd(file_path, 2);
		perror(" ");
		g_.exit_status = 1;
		evaluator_data->ok = 0;
	}
	return (fd);
}
