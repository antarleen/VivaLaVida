#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *y = &x;
    cout << "x: " << x << endl;
    cout << "y: " << *y << endl;
    cout << "Address of y:" << &y << endl;
    int &z = x;
    z++;
    cout << "x: " << x;
    return 0;
}