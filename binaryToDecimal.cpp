#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
    // your code goes here
    int basePower = s.length() - 1;
    cout << basePower << endl;
    int decimalSum = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            cout << pow(2, basePower) * 1 << endl;
            decimalSum += pow(2, basePower) * 1;
        }

        basePower--;
    }
    return decimalSum;
}

int main()
{
    string s = "111";
    cout << binaryToDecimal(s);
    return 0;
}
