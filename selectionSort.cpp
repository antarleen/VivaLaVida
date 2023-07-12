#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        // int curr_index = i;
        int min_position = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        // swap the minimum element with the current position
        swap(arr[i], arr[min_position]);
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = selectionSort(arr);
    for (auto i : sortedArr)
    {
        cout << i << "  ";
    }
    return 0;
}