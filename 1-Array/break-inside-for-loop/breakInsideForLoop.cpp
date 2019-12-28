#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "i : " << i;
        for(int j = 0; j < 10; j++)
        {
            cout << "j " << j << endl;
            if (j == 2)
            //if (i == 2)

            {
                break;
            }
        }
        cout << endl;
    }
}