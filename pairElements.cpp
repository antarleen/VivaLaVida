#include <iostream>
using namespace std;

int elementPairs(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "( " << arr[i] << "," << arr[j] << " )" << endl;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    elementPairs(arr, n);
    return 0;
}