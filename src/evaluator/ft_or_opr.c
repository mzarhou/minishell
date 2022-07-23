/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_or_opr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <mzarhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:07:47 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/23 21:59:32 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evaluator.h"

void	ft_or_opr(t_tree *node)
{
	int	pid;
	int	status;

	pid = ft_fork();
	if (pid == 0) {
		ft_evaluator(node->left);
	}
	waitpid(pid, &status, 0);
	if (WEXITSTATUS(status) == 0)
		exit(WEXITSTATUS(status));
	ft_evaluator(node->right);
}
