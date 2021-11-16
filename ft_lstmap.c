#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *tmp;
    t_list *res;
    t_list *head;
    int flag;

    flag = 0;
    tmp = lst;
    while (tmp != NULL)
    {
        f(tmp->content);
        del(tmp->content);
        res = ft_lstnew(tmp->content);
        if (flag == 0)
        {
            head = res;
            flag++;
        }
        tmp = tmp->next; 
    }
    return (head);
}