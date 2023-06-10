#include <iostream>
using namespace std;

int linear_search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;

    int index = linear_search(arr, n, key) ;
    if (index != -1)
    {
        cout << "Elements is present at index  " << index << endl;
    }else{
        cout<<"Elements is not present in the array"<<endl;
    }
    return 0;
}
