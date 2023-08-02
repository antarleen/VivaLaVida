#include <bits/stdc++.h>
using namespace std;

// Check the code for Pascal traingle and rules

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> pascalSeries = {};
    int StartNum = 1;
    while (n > 0)
    {
        int pascalNum = StartNum;
        vector<int> numByDigit = {};
        while (pascalNum > 0)
        {
            int num = pascalNum % 10;
            numByDigit.push_back(num);
            pascalNum = pascalNum / 10;
        }
        pascalSeries.push_back(numByDigit);
        StartNum = StartNum * 11;
        n--;
    }
    for (auto i : pascalSeries)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return pascalSeries;
}

int main()
{
    pascalTriangle(5);
    return 0;
}