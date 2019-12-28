#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, j, temp;
    printf("Enter number elements of array:\n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i-1;
        while(temp < arr[j] && j >= 0)  // what different if this were while(arr[i] < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    printf("\nYour sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}