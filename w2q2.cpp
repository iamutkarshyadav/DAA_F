#include<iostream> 
using namespace std; 
int indices(int arr[], int n){
    for(int i = 0; i < n - 2; i++){
        for (int j = 0; j < n - 1; j++){
            for (int k = 0; k < n; k++){
                if(arr[i]+ arr[j] == arr[k]){
                    cout<<"triplets are present"; 
                }
            }
        }
    }
    cout<<"no such elements are present"; 
}
 int main(){
    int arr[90] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = sizeof(arr)/ sizeof(arr[0]);
    indices(arr, n); 
    return 0; 
 }