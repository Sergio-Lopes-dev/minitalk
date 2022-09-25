#include "minitalk.h"

void ft_print_pid(void)
{
	char *str;
	
	str = ft_itoa(getpid());
	ft_putstr_fd("PID: ", 1);
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
	free(str);
}

int main(void)
{
	ft_print_pid();	
}
