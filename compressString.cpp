#include <bits/stdc++.h>
using namespace std;

string compress()
{
    vector<string> chars = {"a", "b", "c", "d"};
    // your code goes here
    string compressed_chars;
    int i = 0;
    int len = chars.size();
    int count = 1;
    string current_letter = chars[0];
    for (int i = 1; i < len; i++)
    {
        // cout << chars[i] << endl;
        if (current_letter == chars[i])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                compressed_chars += current_letter;
            }
            else
            {
                compressed_chars += current_letter;
                // cout << current_letter << " " << count << endl;
                compressed_chars += to_string(count);
            }
            current_letter = chars[i];
            count = 1;
        }
    }

    if (count == 1)
    {
        compressed_chars += current_letter;
        // cout << current_letter << " " << count << endl;
    }
    else
    {
        compressed_chars += current_letter;
        // cout << current_letter << " " << count << endl;
        compressed_chars += to_string(count);
    }

    //  Convert string vectors to a single string.

    // std::string collapsedString = std::accumulate(compressed_chars.begin(), compressed_chars.end(), std::string(),
    //                                               [](const std::string &a, const std::string &b)
    //                                               {
    //                                                   return a + "" + b;
    //                                               });

    cout << compressed_chars << endl;
    return compressed_chars;
}

int main()
{

    compress();
    return 0;
}
