/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:37:34 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/10/25 11:20:47 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_bitchar(int signal);
void	ft_print_pid(void);
void	ft_sendbit(char letter, int pid);
void	ft_sendstr(char *str, int pid);

#endif
