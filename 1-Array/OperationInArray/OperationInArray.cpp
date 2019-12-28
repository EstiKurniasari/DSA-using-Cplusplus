// selection short masih salah!!!!!!!!!!s

#include <iostream>

void accessElementofArray(int arr[], int *n);
void insertElementofArray(int arr[], int *n);
void deleteElementofArray(int arr[], int *n);
void linearSearch(int arr[], int *n);
void BinarySearch(int arr[], int *n);
void sortAscendingUsingBubbleSort(int arr[], int *n);
void sortDecendingUsingBubbleSort(int arr[], int *n);

void sortAscendingUsingSelectionSort(int arr[], int *n);
void sortAscendingUsingSelectionSort(int arr[], int *n)
{
    int temp, pos;
    for (int i = 0; i < *n-1; i++)
    {
        temp = arr[*n-1];
        for (int j = *n-2; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                pos = j;
            }
        }
        for (int j = *n-2; j >= pos; j--)
            {
                arr[j+1] = arr[j];
            }
        arr[pos] = temp;
    }
    accessElementofArray(arr, n);
}

void sortDecendingUsingSelectionSort(int arr[], int *n);
void sortDecendingUsingSelectionSort(int arr[], int *n)
{
    int temp, pos;
    for (int i = 0; i < *n-1; i++)
    {
        temp = arr[*n-1];
        for (int j = *n-2; j >= 0; j--)
        {
            if (temp > arr[j])
            {
                pos = j;
            }
        }
        for (int j = *n-2; j >= pos; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[pos] = temp;
    }
    accessElementofArray(arr, n);
}

int main()
{
    int n, pos, value, searchKey;
    int arr[100];
    char ch, doOperation;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    accessElementofArray(arr, &n);
    do {
        printf("*************CHOOSE*************\n");
        printf("1. Access\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search (Linear Search)\n");
        printf("5. Search (Banary Search)\n");
        printf("6. AscendingSort (Bubble Sort)\n");
        printf("7. DescendingSort (Bubble Sort)\n");
        printf("8. AscendingSort (Selection Sort)\n");
        printf("9. DescendingSort (Selection Sort)\n");
        printf("********************************\n");
        printf("Your Answer\n");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1' :
            accessElementofArray(arr, &n);
            break;
        case '2' :
            insertElementofArray(arr, &n);
            break;
        case '3' :
            deleteElementofArray(arr, &n);
            break;
        case '4' :
            linearSearch(arr, &n);
            break;
        case '5' :
            BinarySearch(arr, &n);
            break;
        case '6' :
            sortAscendingUsingBubbleSort(arr, &n);
            break;
        case '7' :
            sortDecendingUsingBubbleSort(arr, &n);
            break;
        case '8' :
            sortAscendingUsingSelectionSort(arr, &n);
            break;
        case '9' :
            sortDecendingUsingSelectionSort(arr, &n);
            break;
        default :
            printf("Enter according to the option\n");
            break;
        }     
        printf("DO OPERATION AGAIN?(y/n)\n");
        scanf(" %c", &doOperation);
    } while(doOperation == 'Y' || doOperation == 'y');
}

void accessElementofArray(int arr[], int *n)
{   
    printf("Access elements of array\n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElementofArray(int arr[], int *n)
{
    int pos, value;
    printf("Enter position (index):\n");
    scanf("%d", &pos);
    printf("Enter element inserted:\n");
    scanf("%d", &value);
    for (int i = *n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    *n += 1;
    printf("Array after insertion:\n");
    accessElementofArray(arr, n);
}

void deleteElementofArray(int arr[], int *n)
{
    char ch;
    int pos, value;
    printf("************DELETE BY************\n");
    printf("1. Index\n");
    printf("2. Value\n");
    printf("*********************************\n");
    printf("Your Answer\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '1':
        printf("Enter the index:\n");
        scanf("%d", &pos);
        for (int i = pos; i < *n; i++)
        {
            arr[i] = arr[i+1];
        }    
        printf("%d deleted\n", arr[pos]);
        break;
    case '2':
        printf("Enter the value\n");
        scanf("%d", &value);
        for (int i = 0; i < *n; i++)
        {
            if (arr[i] == value)
            {
                pos = i;
            }
        }
        for (int i = pos; i < *n; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("%d deleted\n", value);
        break;
    default:
        break;
    }
    *n -= 1;
    printf("Elements after deletion\n");
    accessElementofArray(arr, n);
}

void linearSearch(int arr[], int *n)
{
    int searchKey, i = 0;
    printf("Enter value you want to search\n");
    scanf("%d", &searchKey);
    for(i = 0; i < *n; i++)
    {
        if (arr[i] == searchKey)
        {
            printf("Found %d\n", arr[i]);
            break;                              // this will break the loop and stop increment i
        }
    } 
    if (i == *n)
    {
        printf("Not Found.\n");
    }
}

void BinarySearch(int arr[], int *n)
{
    int searchKey;
    int low = 0, high = *n, mid;
    printf("Entar the value you want search\n");
    scanf("%d", &searchKey);
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] > searchKey)
        {
            high = mid - 1;
        }
        else if (arr[mid] == searchKey)
        {
            printf("Found %d\n", arr[mid]);
            break;
        }
        else
        {
            low = mid + 1;
        }
        if (high > low)
        {
            printf("Not Found\n");
        }
        mid = (low + high) / 2;
    }
}

void sortAscendingUsingBubbleSort(int arr[], int *n)
{
    int temp;
    for (int i = 0; i < *n-1; i++)
    {
        printf("process : ");
        for (int j = *n-1; j > 0; j--)         
        {
            accessElementofArray(arr, n);
            if (arr[j-1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    accessElementofArray(arr, n);
}

void sortDecendingUsingBubbleSort(int arr[], int *n)
{
    int temp;
    for (int i = 0; i < *n-1; i++)
    {
        printf("process:\n");
        for (int j = *n-1; j > 0; j--)
        {
            if (arr[j-1] < arr[j])
            {
                accessElementofArray(arr, n);
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    accessElementofArray(arr, n);
}