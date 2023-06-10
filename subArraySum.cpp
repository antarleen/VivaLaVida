// Brute Force

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int subArraySum(int arr[], int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// Prefix Sum

int getMaxSubArrayPrefix(int arr[], int n)
{
    int pSum[n] = {0};
    pSum[0] = arr[0];
    int maxSum = 0;
    for (int i = 1; i < n; i++)
    {
        pSum[i] = pSum[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = i > 0 ? pSum[j] - pSum[i - 1] : pSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    return maxSum;
}

// Kandane Algorithm
int getMaxSubArrayKandane(int arr[], int n)
{
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currSum += arr[i];
        currSum = currSum < 0 ? 0 : currSum;
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
  
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The max sum of the array is:" << getMaxSubArrayKandane(arr, n);
    return 0;
}