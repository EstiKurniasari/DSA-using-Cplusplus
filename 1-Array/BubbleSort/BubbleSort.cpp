#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter your elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nYour array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])  // for desceding |   if (arr[i] < arr[j]) ==> for asscending
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nYour array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}