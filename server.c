/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:37:43 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/11/23 12:16:50 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_bitchar(int signal)
{
	static int	count;
	static int	letter;

	if (signal == SIGUSR2)
	{
		letter = letter | 1;
	}
	if (count >= 7)
	{
		ft_putchar_fd (letter, 1);
		letter = 0;
		count = 0;
	}
	else
	{
		count++;
		letter = letter << 1;
	}
}

void	ft_print_pid(void)
{
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	ft_print_pid();
	signal(SIGUSR1, ft_bitchar);
	signal(SIGUSR2, ft_bitchar);
	while (1)
		pause();
}
