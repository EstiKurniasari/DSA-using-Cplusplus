#include <iostream>
using namespace std;

void enterElements(int arr[], int n);
void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
void displayArray(int arr[], int n);


int main()
{
    int n, arr[20];

    printf("Enter num array\n");
    scanf("%d", &n);

    printf("Enter array elements \n");
    enterElements(arr, n);

    bubbleSort(arr, n);

    printf("\nSorted array: \n");
    displayArray(arr, n);

    return 0;
}

void enterElements(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int count = -1, swapCount = -1, numStep = 0;;
    
    for (int i = 0; i < n-1; i++)
    {
        swapCount = 0;
        for(int j = 0; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                printf("\nswap\n");

                swap(arr[j], arr[j+1]);
                swapCount++;
            }
            printf("\ni:%d , j:%d, j+1:%d\n", i, j, j+1);
            displayArray(arr, n);
            numStep++;
        }

        if (swapCount == 0)
        {
            printf("break");
            break;
        }
    }

    printf("\nnumStep : %d\n", numStep);   
}


void displayArray(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}


