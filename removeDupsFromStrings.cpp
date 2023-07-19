#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    sort(s.begin(), s.end());
    string uniqueString = "";
    for (char c : s)
    {
        if (uniqueString.find(c) < uniqueString.length())
        {
            continue;
        }
        else
        {
            uniqueString += c;
        }
    }
    return uniqueString;
}

int main()
{
    string str = "geeksforgeeks";
    cout << removeDuplicate(str) << endl;
}