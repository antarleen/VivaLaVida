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

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 2;
    vector<int> out = getRotatedArray(arr, x);
    for (auto i : out)
    {
        cout << i << "  ";
    }
    return 0;
}
