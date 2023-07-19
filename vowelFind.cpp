#include <bits/stdc++.h>
using namespace std;

string vowelFinder(string str)
{
    string vowels = "";
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowels += c;
        }
    }
    return vowels;
}

int main()
{
    string inputString;
    cout << "Enter the input string:" << endl;
    getline(cin, inputString);
    cout << vowelFinder(inputString);
}
