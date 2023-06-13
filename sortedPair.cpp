#include <bits/stdc++.h>
using namespace std;

// Returns  a pair, so middle jumps not needed. Start at the front and back and keep changing by 1 element at the front or back of the pair.
pair<int, int> getSortedPair(vector<int> arr, int val)
{
    int lowestDiff = INT_MAX;
    pair<int, int> PAIR;
    int lower = 0;
    int upper = arr.size() - 1;
    int mid, diff, pair1, pair2;
    while (upper > lower)
    {
        diff = abs(upper + lower - val);
        if (diff < lowestDiff)
        {
            lowestDiff = diff;
            pair1 = upper;
            pair2 = lower;
        }
        if (arr[upper] + arr[lower] > val)
        {
            upper = upper - 1;
        }
        else
        {
            lower = lower + 1;
        }
    }
    PAIR.first = arr[pair1];
    PAIR.second = arr[pair2];
    // cout << arr[pair1] << " " << arr[pair2] << endl;
    return PAIR;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int val = 54;
    pair<int, int> PAIR = getSortedPair(arr, val);

    cout << PAIR.first << " " << PAIR.second << endl;
    return 0;
}