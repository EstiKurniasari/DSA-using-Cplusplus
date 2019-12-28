#include <iostream>
using namespace std;

int main()
{
    int array[100], n, position, value, j;

    printf("Enter number of array elements\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Your array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
/*
    // sorting ascending
    for (int i = 0; i < n-1; i++)
    {
        position = i;
        for (j = i+1; j < n; j++)
        {
            if (array[position] < array[j])
            {
                position = j;
            }
        }
        if (position != i)
        {
            int temp;
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }
*/
        // sorting descending
    for (int i = 0; i < n-1; i++)
    {
        position = i;
        for (j = i+1; j < n; j++)
        {
            printf("\ni - pos : %d - %d\n", i, position);

            if (array[position] > array[j])  
            {
                position = j;
            }
        }
        if (position != i)
        {
            int temp;
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }

    printf("\nYour sorted array:\n");

    for (int i = 0; i < n; i ++)
    {
        printf("%d ", array[i]);
    }
}