#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string A, string B)
{
    // check if strings have the same length
    if (A.length() != B.length())
    {
        return false;
    }
    // check if the strings have the same characters
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    cout << A << endl;
    cout << B << endl;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] != B[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << arePermutation("test", "wwes");
    return 0;
}