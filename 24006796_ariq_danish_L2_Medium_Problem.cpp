#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int mat[3][3] = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    int a[9];
    int b = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[b] = mat[i][j];
            b++;
        }
    }
    
    sort(a, a + 9);
    
    int length = sizeof(a) / sizeof(a[0]);
    int mid = length / 2;
    
    cout << "Middle element: " << a[mid];

    return 0;
}
