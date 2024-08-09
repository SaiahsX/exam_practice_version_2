#include <stddef.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int swapped;
    unsigned int i;
    int temp;
    unsigned int new_size = size;

    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 0;
        while (i < new_size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        new_size--;
    }
}
