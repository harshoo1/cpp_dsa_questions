// brut force

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[] , int size, int window_size){
    int max_sum = INT_MIN;

    for(int i =0; i<size-window_size+1;i++){
        int current_sum = 0;
        for(int j = 0; j < window_size ;j++){
            current_sum = current_sum + arr[i+j];
        }
        max_sum = max(current_sum , max_sum);

    }
    return max_sum;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<maxSum(arr, n, k);
    return 0;
}