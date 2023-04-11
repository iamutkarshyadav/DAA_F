#include<iostream> 
using namespace std;
int search(int arr[], int n, int k){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == k){
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
    int k = 14;
    search(arr, n, k);
    return 0;
}