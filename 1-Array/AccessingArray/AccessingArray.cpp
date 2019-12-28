#include <iostream>
using namespace std;

template <size_t n>
void accessArray(int (&arr)[n])
{
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main ()
{
    int arr[] = {1, 2, 3, 4, 5};
    accessArray(arr);
}