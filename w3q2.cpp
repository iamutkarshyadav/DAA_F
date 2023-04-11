#include <iostream>
using namespace std;
int findSmallest(int[], int);
int main()
{
    int arr[10] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
    int pos, temp, pass = 0;
    cout << "\n Input list of elements to be Sorted\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int i = 0; i < 10; i++)
    {
        pos = findSmallest(arr, i);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
        pass++;
    }
    cout << "\n Sorted list of elements is\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nNumber of passes required to sort the array: " << pass;
    return 0;
}
int findSmallest(int arr[], int i)
{
    int ele, position, j;
    ele = arr[i];
    position = i;
    for (j = i + 1; j < 10; j++)
    {
        if (arr[j] < ele)
        {
            ele = arr[j];
            position = j;
        }
    }
    return position;
}