#include <bits/stdc++.h>
using namespace std;

int spiralPrint(int num[3][3])
{
    int startCol = 0;
    int endRow = 3;
    int startRow = 0, endCol = 3;

    // cout << endRow << " " << endCol << " " << endl;

    while (startCol < endCol && startRow < endRow)
    {
        int currCol = startCol;
        int currRow = startRow;
        // Print the startRow elements till the last element in the Row(num[startRow][startCol] to num[startRow][endCol])
        // cout << "PART I" << endl;
        while (currCol < endCol)
        {
            cout << num[startRow][currCol] << " ";
            currCol++;
        }
        currRow++;
        // Print the endCol elements from startRow+1 to endRow(num[startRow+1][endCol] to num[endRow][endCol])
        // cout << endl;
        // cout << "PART II" << endl;
        while (currRow < endRow)
        {
            cout << num[currRow][endCol - 1] << " ";
            currRow++;
        }
        // Print the endRow elements from endCol to startCol(num[endRow][endCol-1] to num[endRow][startCol])
        // cout << endl;
        // cout << "PART III" << endl;
        currCol--;
        while (currCol - 1 >= startCol)
        {
            cout << num[endRow - 1][currCol - 1] << " ";
            currCol--;
        }
        // Print the startCol elements from endRow -1 to startRow+1(num[endRow-1][startCol] to num[startRow+1][endCol)
        currRow--;
        // cout << endl;
        // cout << "PART IV" << endl;
        while (currRow - 1 >= startRow + 1)
        {
            cout << num[currRow - 1][startCol] << " ";
            currRow--;
        }
        startCol++;
        endCol--;
        endRow--;
        startRow++;
    }
    return 0;
}

int main()
{
    int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralPrint(num);
    return 0;
}
