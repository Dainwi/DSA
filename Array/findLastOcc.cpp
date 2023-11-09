#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int findLastOcc(int arr[], int n, int x){
    int ans = -1;
    for(int i = 0; i < n; i++  ){
        if(arr[i] == x){
            ans = i;
        }
    }
    return ans;
}

int main() {
    int n, x;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin >> x;

    cout<<findLastOcc(arr, n, x);

    return 0;
}