#include <iostream>
using namespace std;

int main()
{
    // create array
    int array [100], search, n, i;
    char c;

    // make array
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    // input elements of array
    printf("Enter element of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    do {
        // input search number
        printf("Enter number to search\n");
        scanf("%d", &search);

        // do linear search
        for (i = 0; i < n; i++)
        {
            if (search == array[i])
            {
                printf("Found %d\n", search);
                break;
            }
        }
        if (i == n)
        {
            printf("Not Found\n");
        }
        printf("Search again?\n"); 
        scanf(" %c", &c);               // should be " %c" because if it's written "%c" this caused the newline is accepted as character input from the user
    } while(c == 'Y' || c == 'y');
}