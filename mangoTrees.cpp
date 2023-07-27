#include <bits/stdc++.h>
using namespace std;

// Needs revision of code. NOT FUNCTIONAL YET.
int mangoTrees(int arr[][4], int m, int n)
{
    int treeSumArr[][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    // The number of trees in a particular section of tree will be stored in the right bottom corner element of the array.
    // The sum of the number of trees in a particular section of the garden is determined by:
    // 1+ arr[i,j-1] + arr[i-1,j] - arr[i-1,j-1] : If there is a tree present in the location
    // 0 + arr[i,j-1] + arr[i-1,j] - arr[i-1,j-1] : If there is no tree present in the location
    // Our limitis would be defined by the boundaries of the array
    // After the reference matrix is creatred, it will be used to get the max number of trees in a section of four.

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                if (arr[i][j] == 1)
                {
                    treeSumArr[i][j] = 1;
                }
                else
                {
                    treeSumArr[i][j] = 1;
                }
            }
            else if (i > 0 && j == 0)
            {
                if (arr[i][j] == 1)
                {
                    treeSumArr[i][j] = 1 + treeSumArr[i - 1][j];
                }
                else
                {
                    treeSumArr[i][j] = treeSumArr[i - 1][j];
                }
            }
            else if (j > 0 && i == 0)
            {
                if (arr[i][j] == 1)
                {
                    treeSumArr[i][j] = 1 + treeSumArr[i][j - 1];
                }
                else
                {
                    treeSumArr[i][j] = treeSumArr[i][j - 1];
                }
            }
            else
            {
                if (arr[i][j] == 1)
                {
                    treeSumArr[i][j] = 1 + treeSumArr[i - 1][j] + treeSumArr[i][j - 1] - treeSumArr[i - 1][j - 1];
                }
                else
                {
                    treeSumArr[i][j] = treeSumArr[i - 1][j] + treeSumArr[i][j - 1] - treeSumArr[i - 1][j - 1];
                }
            }
        }
    }

    // Print out the prefix sum array

    // cout << " The original array is:" << endl;

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << " The prefix sum array is:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << treeSumArr[i][j] << " ";
        }
        cout << endl;
    }

    // Print the number of trees in reach subset

    int maxTrees = INT_MIN;

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            //  Number of trees in the left upper subset
            int leftUpper = treeSumArr[i - 1][j - 1];
            // Number of trees in the right upper subset
            int rightUpper = treeSumArr[i][n] - leftUpper;
            // Number of trees in the left down subset
            int leftDown = treeSumArr[m][j - 1] - leftUpper;
            // Number of trees in the right down subset
            int rightDown = treeSumArr[m][j] - rightUpper - leftDown - leftUpper;

            maxTrees = max(maxTrees, min({leftDown, rightDown, leftUpper, rightUpper}));
        }
    }

    return maxTrees;
}

int main()
{
    int arr[][4] = {{1, 0, 0, 1}, {0, 1, 1, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
    int m = 4;
    int n = 4;
    cout << "The maximum number of trees he can get it :" << mangoTrees(arr, m, n);
    return 0;
}