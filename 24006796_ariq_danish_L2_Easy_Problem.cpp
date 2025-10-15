#include <iostream>
#include <algorithm>  
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 4, 2},
        {3, 5, 6},
        {9, 7, 8}
    };
    int temp[9];
    int idx = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[idx] = arr[i][j];
            idx++;
        }
    }
    
    sort(temp, temp + 9);
    
    idx = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]= temp[idx];
            idx++;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}