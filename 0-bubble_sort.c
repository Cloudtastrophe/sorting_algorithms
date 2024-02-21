#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool bubbly = false;

    if (array == NULL || size < 2)
        return;

    /* Loop until no more swaps are needed */
    while (bubbly == false)
    {
        bubbly = true;
        /* Iterate through the array */
        for (i = 0; i < len - 1; i++)
        {
            /* Check if current element is greater than next element */
            if (array[i] > array[i + 1])
            {
                /* Swap the elements and print the array */
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                /* Set bubbly to false to indicate a swap occurred */
                bubbly = false;
            }
        }
        /* Decrease len to reduce the range of the array */
        len--;
    }
}
