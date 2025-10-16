#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={2,4,6,8,10,12,14};
    int target = 102, st = 0, end = n-1, key=0;
    bool flag = false;
    while(st<=end){
        int m = (st+end)/2;
        if(arr[m]==target){
            key = m;
            flag = true;
            break;
        }else if(arr[m]>target){
            end = m-1;
        }else{
            st = m+1;
        }
    }
    if(flag){
        cout <<"Element found at index no. : " << key;
    }else{
        cout <<"Element not found";
    }
}
