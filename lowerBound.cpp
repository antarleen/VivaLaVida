#include <bits/stdc++.h>
using namespace std;

int getLowerBound(vector<int> arr, int val)
{
    int islowest = INT_MAX;
    for (auto i : arr)
    {
        islowest = islowest > i ? i : islowest;
    }
    if (islowest > val)
    {
        return -1;
    }

    int lowest = INT_MAX;
    int min_diff = INT_MAX;

    // NOTE: Get difference between elemetns only when val is not 0.
    for (int i = 0; i < arr.size(); i++)
    {
        int diff;
        if (val != 0)
        {
            diff = val - arr[i];
        }
        else
        {
            diff = arr[i];
        }
        if (diff >= 0 && diff < min_diff)
        {
            min_diff = diff;
            lowest = arr[i];
        }
    }
    return lowest;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 3, 4};

    cout << getLowerBound(arr, 5) << endl;
    return 0;
}