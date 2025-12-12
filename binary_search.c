#include "push_swap.h"

int binary_search(int *arr, int size, int value)
{
    int low;
    int high;
    int mid;

    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == value)
            return mid;
        if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}