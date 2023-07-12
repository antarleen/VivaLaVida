#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    int n = a.size();
    if (flag)
    {
        sort(a.begin(), a.end());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = sortingWithComparator(arr,true);
    for (auto i : sortedArr)
    {
        cout << i << "  ";
    }
    return 0;
}