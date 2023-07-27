#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> wavePrintOutput = {};
    // Loop through each column
    bool flipFlag = false;
    for (int col = n - 1; col >= 0; col--)
    {
        if (flipFlag)
        {
            for (int row = m - 1; row >= 0; row--)
            {
                wavePrintOutput.push_back(arr[row][col]);
            }
            flipFlag = false;
        }
        else
        {
            for (int row = 0; row < m; row++)
            {
                wavePrintOutput.push_back(arr[row][col]);
            }
            flipFlag = true;
        }
    }
    return wavePrintOutput;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row = arr.size();
    int column = arr[0].size();
    vector<int> revWavePrint = WavePrint(row, column, arr);
    for (auto el : revWavePrint)
    {
        cout << el << " ";
    }
    cout << endl;
}
