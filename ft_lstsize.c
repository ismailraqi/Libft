#include "libft.h"
int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int i;

    i = 0;
    tmp = lst;
    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}
