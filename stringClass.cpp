#include <bits/stdc++.h>
using namespace std;

void stringBasics()
{
    string s;
    cout << "Enter the string :" << endl;
    getline(cin, s);
    //  Array of strings
    vector<string> stringVec;
    for (char c : s)
    {
        cout << c <<",";
    }
}

int main()
{
    stringBasics();
    return 0;
}