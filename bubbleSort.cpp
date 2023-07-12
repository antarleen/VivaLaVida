#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr)
{
    int n = arr.size();
    bool swapped = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no elements are swapped then break the loop, imporving time complexity for the best case scenario
        if (!swapped)
        {
            break;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = bubbleSort(arr);
    for (auto i : sortedArr)
    {
        cout << i << "  ";
    }
    return 0;
}
