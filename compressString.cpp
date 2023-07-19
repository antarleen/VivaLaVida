#include <bits/stdc++.h>
using namespace std;

int compress()
{
    vector<string> chars = {"a", "a", "b", "b", "c", "c", "c"};
    // your code goes here
    vector<string> compressed_chars;
    int i = 1;
    int len = size(chars);
    int count = 1;
    string current_letter = chars[0];
    while (i < len - 1)
    {
        i++;
        if (current_letter == chars[i])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                compressed_chars.push_back(current_letter);
            }
            else
            {
                compressed_chars.push_back(current_letter);
                string c_count;
                c_count.push_back(count);
                cout << count;
                compressed_chars.push_back(c_count);
            }
            current_letter = chars[i];
            count = 1;
        }
    }

    for (auto c : compressed_chars)
    {
        cout << c << " ";
    }
    return 0;
}


int main()
{

    compress();
    return 0;
}
