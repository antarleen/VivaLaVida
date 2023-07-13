#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(const string s)
{
    int len = s.length();
    // Create a char string to use char functions
    char *checkString = new char[len + 1];
    strcpy(checkString, s.c_str());
    char reversedString[1000];
    int n = s.length();
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        reversedString[j++] = checkString[i];
    }
    // cout << checkString << endl;
    // cout << reversedString << endl;
    return strcmp(reversedString, checkString);
}

int main()
{
    if (!checkPalindrome("Hello"))
    {
        cout << "It is a palindrome!" << endl;
    }
    else
    {
        cout << "It is not a palindrome!" << endl;
    }
    return 0;
}