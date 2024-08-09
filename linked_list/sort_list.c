#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
    int     data;
    t_list  *next;
};


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swapped = 1;
    int swap = 0;
    t_list  *swp = lst;

    while (swapped == 1)
    {
        swapped = 0;
        while (swp != 0 && swp -> next != 0)
        {
            if (cmp(swp -> data, swp -> next -> data) == 0)
            {
                swap = swp->data;
                swp->data = swp->next->data;
                swp->next->data = swap;
                swapped = 1;
            }
            swp = swp->next;
        }
        swp = lst;
    }
    return (lst);
}