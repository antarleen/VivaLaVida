#include <bits/stdc++.h>
using namespace std;

int getMaxSubArraySum(vector<int> arr)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for (auto i : arr)
    {
        // NOTE: Comparison with max should be done before making current sum 0, if current sum is -ve, then need to make sure it is stored as the greatest sum value.
        currSum += i;
        maxSum = maxSum > currSum ? maxSum : currSum;
        currSum = currSum > 0 ? currSum : 0;
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-5, -11, -1, -13, -2, -1};
    cout << getMaxSubArraySum(arr) << endl;
    return 0;
}