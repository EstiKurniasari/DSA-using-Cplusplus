#include <iostream>
using namespace std;

int main()
{
    int array[10], low = 0, high, midle, n, search;

    // make array
    printf("Enter number of element:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &array[i]);
    }

    printf("Your array: ");
    
    // shows the array
    for (int i = 0; i< n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter your search number:\n");
    scanf("%d", &search);

    high = n - 1;
    midle = (low + high) / 2;

    while(low <= high)
    {
        if (array[midle] > search)
        {
            high = midle - 1;
        }
        else if (array[midle] < search)
        {
            low = midle + 1;
        }
        else
        {
            printf("Found : %d\n", array[midle]);
            break;      
        }
        midle = (low + high) / 2;
    }
    if (high < low)
    {
        printf("Not found\n");
    }
}