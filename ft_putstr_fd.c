#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if (s == NULL || (fd < 0 && fd > 2))
        return;
    while (s[i] != '\0')
    {
        write(fd, &s[i], sizeof(char));
        i++;
    }
}
