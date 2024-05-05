/*Make a program to fill a 10 elements int array with random numbers, then

Print the array to the output.
Sort the array ascending(from the smallest to the largest) and then
Print the sorted array to the output.


Example:

    The array filled with random numbers: {9, 3, 8, 0, 5, 2, 6, 7, 1, 4}

    The sorted array: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } */
#include <stdio.h>

int main(void)
{
    int array[10] = {1, 5, 3, 4, 2, 6, 7, 9, 11, 15};
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {

                if (array[i] > array[j])
                {                        
                    int temp = array[i]; // temporary holder for while we are moving j
                    array[i] = array[j]; // j has been moved to i 
                    array[j] = temp;     // i has been moved to j
                }
            }
        }
        for (int i = 0; i < 10; i++)

        {
            printf("%d\n", array[i]);
        }
    }
    return 0;
}
