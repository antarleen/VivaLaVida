using namespace std;
#include <bits/stdc++.h>

int countPairs(vector<int> sticks, int D)
{
    sort(sticks.begin(), sticks.end());
    int n = sticks.size();
    int i = 0;
    int pairs = 0;
    while (i < n)
    {
        if (sticks[i+1] - sticks[i]< D)
        {
            pairs += 1;
            i += 2;
        }
        else
        {
            i += 1;
        }
    }
    return pairs;
}

int main()
{
    vector<int> arr = {1,3,3,9,4};
    int pairs = countPairs(arr, 2);
    cout << "The number of pairs is : " << pairs << endl;
}