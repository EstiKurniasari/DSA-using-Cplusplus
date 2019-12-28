#include <iostream>
using namespace std;

int main()
{
    int array[100], n, position, value;

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

    printf("\nPosition of deleted value:\n");
    scanf("%d", &position);

    // delete the element
    for (int i = position; i < n; i++)
    {
        array[i] = array[i+1];
    }

    if (position < n-1)
    {
        n -= 1;
    }

    printf("\nNew array:\n");

    for (int i = 0; i < n; i ++)
    {
        printf("%d ", array[i]);
    }
}