#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    if (fd < 0 && fd > 2)
        return;
    write(fd, &c, sizeof(char));
}
