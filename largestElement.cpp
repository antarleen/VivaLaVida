#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLargestElement(vector<int> arr)
{
    int largest = INT_MIN;
    for (auto i : arr)
    {
        largest = largest > i ? largest : i;
    }
    return largest;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << getLargestElement(arr);
    return 0;
}
