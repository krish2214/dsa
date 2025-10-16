#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={5,3,1,4,2};
    for(int i=0; i<n; i++){
        int midIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[midIndex]){
                midIndex = j;
            }
        }
        swap(arr[i],arr[midIndex]);
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
