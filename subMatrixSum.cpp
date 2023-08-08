#include <bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    // your code goes here
    int rowLimit = v.size();
    int colLimit = v[1].size();
    vector<vector<int>> sumVector(rowLimit, vector<int>(colLimit, 0));
    // Create the submatrix sum vector
    for (int i = 0; i < rowLimit; i++)
    {
        for (int j = 0; j < colLimit; j++)
        {
            // Checking boundary cases
            if (i == 0 && j == 0)
            {
                sumVector[i][j] = v[0][0];
            }
            else if (i == 0 && j > 0)
            {
                sumVector[i][j] = sumVector[i][j - 1] + v[i][j];
            }
            else if (i > 0 && j == 0)
            {
                sumVector[i][j] = sumVector[i - 1][j] + v[i][j];
            }
            // Calculating sum for middle elements
            else
            {
                sumVector[i][j] = sumVector[i - 1][j] + sumVector[i][j - 1] - sumVector[i - 1][j - 1] + v[i][j];
            }
        }
    }

    // Printing subarray sum matrix
    for (auto row : v)
    {
        for (auto el : row)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    cout << "The prefix sum array is:" << endl;
    for (auto row : sumVector)
    {
        for (auto el : row)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    // Calculating the required subarray sum
    int subArrSum = 0;
    if (sr > 0 && sc > 0 && er > 0 && ec > 0)
    {
        subArrSum = sumVector[er][ec] - sumVector[sr - 1][ec] - sumVector[er][sc - 1] + sumVector[sr - 1][sc - 1];
    }
    else if (sr == 0 && sc > 0 && er > 0 && ec > 0)
    {
        subArrSum = sumVector[er][ec] - sumVector[er][sc - 1];
    }
    else if (sr > 0 && sc == 0 && er > 0 && ec > 0)
    {
        subArrSum = sumVector[er][ec] - sumVector[sr - 1][ec];
    }
    else if (sr == 0 && sc == 0 && er > 0 && ec > 0)
    {
        subArrSum = sumVector[er][ec];
    }
    cout << endl;
    cout << "The subarray sum is:" << subArrSum;
    return subArrSum;
}
int main()
{
    vector<vector<int>> mat{
        {1, 0, 0, 1}, {0, 1, 1, 1}, {0, 1, 2, 3}};
    sum(mat, 0, 0, 2, 2);
    return 0;
}