//https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/

#include <iostream>
using namespace std;

// arrays are always passed pointers in function, findSize(int arr[]) and findSize(int *arr) mean exatly the same.
void findSize(int arr[]) // WRONG!!
{
    printf ("%d\n", sizeof(arr)); 
}

// use reference
void findSizev2(int (&arr)[5])
{
    printf ("%d\n", sizeof(arr)); 
}

template <size_t n>
void findSizev3(int (&arr)[n])
{
    printf ("%d\n", sizeof(int) * n); 
}

//generic function using template
template < typename T, size_t n>
void findSizev4(T (&arr)[n])
{
    printf("%d", sizeof(T) * n);
}

// accessing array
template <typename T, size_t n>
void displayArr(T (&arr)[n])
{
    printf("\nCall display array\n");
    for (T i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{   
    int array[] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(array));          // output = 20, >> 5 * sizeof(int)
    findSize(array);  // 4
    findSizev2(array);
    findSizev3(array);
    findSizev4(array);

    displayArr(array);

    // dynamic allocated array
    int *dyArr = (int*) malloc(sizeof(float)*20);// ??
    printf("%d\n", dyArr);


    //displayArray(array);
}