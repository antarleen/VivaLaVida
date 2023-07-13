#include <bits/stdc++.h>
using namespace std;

vector<char> shortestPath(const string &path)
{

    int vertical = 0;
    int horizontal = 0;

    for (char c : path)
    {
        if (c == 'N')
            vertical++;
        else if (c == 'S')
            vertical--;
        else if (c == 'W')
            horizontal--;
        else if (c == 'E')
            horizontal++;
    }
    vector<char> route;

    while (vertical != 0)
    {
        if (vertical > 0)
        {
            route.push_back('N');
            vertical--;
        }
        else
        {
            route.push_back('S');
            vertical++;
        }
    }

    while (horizontal != 0)
    {
        if (horizontal > 0)
        {
            route.push_back('E');
            horizontal--;
        }
        else
        {
            route.push_back('W');
            horizontal++;
        }
    }

    return route;
}

int main()
{
    string route;
    getline(cin, route);
    vector<char> shortRoute = shortestPath(route);
    for (auto i : shortRoute)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
