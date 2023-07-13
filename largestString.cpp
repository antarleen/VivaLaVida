#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of strings: " << endl;
    char sentence[1000];
    char largest_sentence[1000];
    int n=0;
    cin >> n;

    int largest = INT_MIN;
    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if (len > largest)
        {
            strcpy(largest_sentence, sentence);
            largest = len;
        }
    }
    cout << "The largest string is " << largest_sentence << endl;
    return 0;
}