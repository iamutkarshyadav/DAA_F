#include<iostream>
using namespace std;
void getarray(int arr[], int n){
    cout<<"Enter the elements of the array \n"; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
}
 void unsorted(int arr[], int n){
    cout << "The unsorted array is : \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
 }
void insertsort(int arr[], int n){
    for (int k = 1; k < n; k++){
        int temp = arr[k];
        int j = k - 1;
        while (j >= 0 && temp <= arr[j]){
            arr[j + 1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = temp; 
    }
}
void show(int arr[], int n){
    cout << "sorted array is: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t"; 
    }
}
 int main(void){
    int n;
    cout << "Enter the number of the elements of the array : \n";
    cin >> n;
    int arr[n];
    n = sizeof(arr)/ sizeof (arr[0]);
    getarray(arr, n);
    unsorted(arr, n);
    insertsort(arr, n);
    cout << endl;
    show(arr, n);
    return 0; 
 }