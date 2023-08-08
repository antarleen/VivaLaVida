#include <bits/stdc++.h>
using namespace std;

int applyTax(int &amount)
{
    float tax = 0.1;
    amount = amount + 0.1 * amount;
    return 0;
}

int main()
{
    int amount = 100;
    applyTax(amount);
    cout << "Total amount :" << amount;
    return 0;
}