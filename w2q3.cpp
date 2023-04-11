#include<iostream>
using namespace std;
int search(int arr[], int n, int key){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] - arr[j] == key){
                cout << " Present ";
                break;
            }
        }
    }
    cout << "Not present"; 
}
 int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 14;
    search(arr, n, key);
    return 0; 
 }