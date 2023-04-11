#include<iostream> 
using namespace std;
int search(int arr[], int n, int key){
    int index = 0; 
    for (int i = 0; i < n; i ++){
        index++;
        if(arr[i] == key){
            cout << "The key element is present in the array at index :" <<index ;
        }
    }
}
int main(){
    int arr[50] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 3;
    search(arr, n, key); 
    return 0; 
}