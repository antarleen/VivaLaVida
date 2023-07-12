#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> x_pos;
    vector<int> y_pos;
    // sort the towers based on their position
    for (auto it = std::make_move_iterator(position.begin()),
              end = std::make_move_iterator(position.end());
         it != end; ++it)
    {
        x_pos.push_back(std::move(it->first));
        y_pos.push_back(std::move(it->second));
    }
    sort(x_pos.begin(), x_pos.end());
    sort(y_pos.begin(), y_pos.end());

    // get the first position and the second position with difference from the starting position
    int dx = x_pos[0];
    int dy = y_pos[0];

    // get the number of towers places
    int n = position.size();

    // iterate through the the towers to get the largest position
    for (int i = 1; i < n; i++)
    {
        int tdx = x_pos[i] - x_pos[i - 1]-1;
        int tdy = y_pos[i] - y_pos[i - 1]-1;
        dx = max(dx, tdx);
        dy = max(dy, tdy);
    }

    dx = max(W - x_pos[n - 1]-1, dx);
    dy = max(H - y_pos[n - 1]-1, dy);

    return dx * dy;
}

int main()
{
    int W = 15;
    int H = 8;
    vector<pair<int, int>> position;
    int arr[] = {3, 11, 8};
    int arr1[] = {8, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Entering values in vector of pairs
    for (int i = 0; i < n; i++)
        position.push_back(make_pair(arr[i], arr1[i]));

    cout << "The largest undefended area is: " << defkin(W, H, position);
}