#include <iostream>
#include <algorithm>

using namespace std;

bool search(int arr[], int n)
{
    sort(arr, arr + n); 
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true; 
        }
    }
    return false; 
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5,5,5,5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    if (search(arr, n))
    {
        cout << "The array has duplicate elements." << endl;
    }
    else
    {
        cout << "The array does not have duplicate elements." << endl;
    }
    return 0;
}
