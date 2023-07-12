#include <bits/stdc++.h>
using namespace std;

vector<int> getRotatedArray(vector<int> arr, int n)
{
    while (n > 0)
    {
        int pop = arr[arr.size() - 1];
        arr.pop_back();
        arr.insert(arr.begin(), pop);
        n--;
    }
    return arr;
}

// Optimized version of getRotatedArray
vector<int> kRotate(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 2;
    vector<int> out = kRotate(arr, x);
    for (auto i : out)
    {
        cout << i << "  ";
    }
    return 0;
}
