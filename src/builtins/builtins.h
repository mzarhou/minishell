/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:56:35 by mzarhou           #+#    #+#             */
/*   Updated: 2022/07/23 21:17:44 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

# include "libft/libft.h"
# include "str_utils/str_utils.h"
# include <unistd.h>
# include <stdio.h>

typedef void (*t_command_func)(char **);

int				ft_is_builtin(char *command_name);
t_command_func	ft_select_builtin_command(char *command_name);
void			ft_echo_command(char **cmd);
void			ft_exit_command(char **command);

#endif
