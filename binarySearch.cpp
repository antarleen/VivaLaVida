#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int lower = 0;
    int upper = n-1;
    while (lower <= upper)
    {
        int mid = (upper + lower) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            lower = mid + 1;
        }
        else
        {
            upper = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 13, 24, 35, 46, 57, 68};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index = binary_search(arr, n, key);
    if (index != -1)
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }
}