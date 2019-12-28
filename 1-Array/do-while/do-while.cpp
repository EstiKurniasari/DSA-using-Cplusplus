#include <iostream>
using namespace std;

int main ()
{
    char a;
    do {
        printf("inside while \n");
        scanf(" %c", &a);

    } while (a == 'Y' || a == 'y');
}