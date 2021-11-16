#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(*lst);
    last->next = (t_list *)malloc(sizeof(t_list));
    if (last->next == NULL)
        return;
    last->next = new;
}