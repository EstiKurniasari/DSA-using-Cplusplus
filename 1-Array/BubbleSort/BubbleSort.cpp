#include <iostream>
using namespace std;

void displayArr(int arr[], int n);

int main()
{
    int arr[100], n, count = -1;
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

    int loopcount = 0;
    int numstep=0;
    // bubble sort
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])  // for desceding |   if (arr[i] < arr[j]) ==> for asscending
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
            numstep++;
        }

        // if (count == 0)
        // {
        //     break;
        // }

        loopcount++;
    }

    
    printf("\nYour sorted array:\n");
    displayArr(arr, n);

    printf("\nCount swap : %d\n", count);
    printf("\nLoopCount swap : %d\n", loopcount);
    printf("\nnumstep: %d\n", numstep);
    

    system("pause");
    return 0;
}

void displayArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}