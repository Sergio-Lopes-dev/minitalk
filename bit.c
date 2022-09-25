#include <unistd.h>
void print_bit(char txt)
{
	int		count;
	unsigned char	bit;

	count = 8;
	while(count-- > 0)
	{
		bit = (txt >> count & 1) + '0';
		write(1, &bit, 1);
	}
	write(1, "\n", 1);
}	
int main(void)
{	
	print_bit('a');
}	
