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

//  Get the lower bound using BinarySearch
int getLowerBoundFaster(vector<int> arr, int val)
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

    int upper = arr.size() - 1;
    int lower = 0;
    int middle;

    while (upper >= lower)
    {
        middle = upper + lower / 2;
        if (arr[middle] == val)
        {
            return val;
        }
        else if (arr[middle] >= val)
        {
            upper = middle - 1;
        }
        else
        {
            lower = middle + 1;
        }
    }
    return middle;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 3, 4};

    cout << getLowerBoundFaster(arr, 5) << endl;
    return 0;
}