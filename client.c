/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:37:50 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/11/23 12:19:12 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_sendbit(char letter, int pid)
{
	int	count;

	count = 7;
	while (count >= 0)
	{
		if ((letter >> count & 1) == 0)
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		count--;
		usleep(500);
	}
}

void	ft_sendstr(char *str, int pid)
{
	int	count;

	count = 0;
	while (str[count])
	{
		ft_sendbit(str[count], pid);
		count++;
	}
	ft_sendbit('\n', pid);
}	

int	main(int argc, char *argv[])
{	
	if (argc != 3)
	{
		exit(EXIT_FAILURE);
	}
	ft_sendstr(argv[2], ft_atoi(argv[1]));
}	
