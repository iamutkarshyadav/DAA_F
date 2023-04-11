#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key, int &comparisons)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        comparisons++;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            return binarySearch(arr, left, mid - 1, key, comparisons);
        }
        return binarySearch(arr, mid + 1, right, key, comparisons);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int comparisons = 0;

    int result = binarySearch(arr, 0, n - 1, key, comparisons);

    if (result == -1)
    {
        cout << "Element not present in the array\n";
    }
    else
    {
        cout << "Element present in the array at index " << result << "\n";
    }

    cout << "Total number of comparisons: " << comparisons << "\n";
    return 0;
}
