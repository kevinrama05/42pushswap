#include "push_swap.h"

static void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

static int is_sorted(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size - 1)
    {
        if (arr[i] > arr[i + 1])
            return (0);
        i++;
    }
    return (1);
}

int *bubble_sort(int *arr, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < size - 1)
    {
        if (is_sorted(arr, size) == 1)
            break ;
        while (j <= size - i - 1)
        {
            if (arr[j] > arr[j + 1])
                ft_swap(&arr[j], &arr[j + 1]);
            j++;
        }
        j = 0;
        i++;
    }
    return (arr);
}