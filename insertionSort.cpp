#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = insertionSort(arr);
    for (auto i : sortedArr)
    {
        cout << i << "  ";
    }
    return 0;
}