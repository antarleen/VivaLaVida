#include <bits/stdc++.h>
using namespace std;

pair<int, int> staircaseSearch(int arr[][4], int n, int m, int key)
{
    int i = 0;
    int j = n - 1;

    // Start with the right top diagonal element and start the seach.
    // If the element is bigger than the key, then reduce the colmn, else
    // reduce the key value.
    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }

    while (i < n && j >= 0)
    {
        // cout << "Current element:" << arr[i][j] << " " << endl;
        if (key == arr[i][j])
        {
            return {i, j};
        }

        if (key > arr[i][j])
        {
            i++;
        }

        else
        {
            j--;
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 38, 48}, {32, 33, 39, 50}};
    int key = 29;
    pair<int, int> pos = staircaseSearch(arr, 4, 4, key);
    cout << pos.first << " " << pos.second << endl;
    return 0;
}
