#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(), v.end());
    return v;
}

int main()
{

    vector<pair<int, int>> pCarts;
    int arr[] = {10, 10, 5, 40};
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Entering values in vector of pairs
    for (int i = 0; i < n; i++)
        pCarts.push_back(make_pair(arr[i], arr1[i]));

    vector<pair<int, int>> sortedCart = sortCartesian(pCarts);
    for (auto i : sortedCart)
    {
        cout << i.first << " " << i.second;
        cout << endl;
    }
}