#include "libft.h"
void	ft_putchar(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	lnb;

    if (fd < 0 && fd > 2)
        return;
	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-', fd);
		lnb *= -1;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10, fd);
		ft_putnbr(lnb % 10, fd);
	}
	else
	{
		ft_putchar(lnb + 48, fd);
	}
}