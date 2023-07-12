#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr)
{
    int n = arr.size();
    int &max = *max_element(arr.begin(), arr.end());
    vector<int> vecArr(max, 0);
    vector<int> sortedArr;
    for (auto i : arr)
    {
        vecArr[i] += 1;
    }

    for (int i = 0; i < vecArr.size(); i++)
    {
        while (vecArr[i] > 0)
        {
            sortedArr.push_back(i);
            vecArr[i]--;
        }
    }
    return sortedArr;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = countingSort(arr);
    for (auto i : sortedArr)
    {
        cout << i << "  ";
    }
    return 0;
}