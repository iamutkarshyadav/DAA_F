#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key, bool searchFirst)
{
    int low = 0, high = n - 1, result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            result = mid;

            if (searchFirst)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int firstIndex = binarySearch(arr, n, key, true);
    int lastIndex = binarySearch(arr, n, key, false);

    if (firstIndex == -1 || lastIndex == -1)
    {
        cout << "Element not present in the array\n";
    }
    else
    {
        int numCopies = lastIndex - firstIndex + 1;
        cout << "Element present in the array\n";
        cout << "Number of copies of the given key: " << numCopies << "\n";
    }

    return 0;
}
