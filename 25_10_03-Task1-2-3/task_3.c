#include <iostream>

using namespace std;

int main()
{
    int N = 5;
    int mat[N][N] = {
                { 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }
                };
    int max1 = -100;
    int max2 = -100;
    int val;
    
    for (int i = 0;i < 5;i++ )
    {
        for (int j = 0;j < 5;j++ )
        {
            val = mat[i][j];
            if (val > max1)
            {
                int temp1 = max1;
                max1 = val;
                max2 = temp1;
            }
            else if (val > max2)
            {
                max2 = val;
            }
        }
    }
    int totalmax = max1 + max2;
        cout << "Total max is " << totalmax << "\n";
        
    return 0;
}
