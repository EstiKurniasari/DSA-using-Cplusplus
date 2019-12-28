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

    printf("\nPosition of inserted value:\n");
    scanf("%d", &position);
    printf("\nInserted value:\n");
    scanf("%d", &value);

    // insert the element
    for (int i = n-1; i >= position; i--)
    {
        array[i+1] = array[i];
    }

    array[position] = value;
    n += 1;
    printf("\nNew array:\n");

    for (int i = 0; i < n; i ++)
    {
        printf("%d ", array[i]);
        
    }
}