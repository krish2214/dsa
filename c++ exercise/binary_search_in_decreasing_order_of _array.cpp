#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={14,12,10,8,6,4,2};
    int target = 12, st = 0, end = n-1, key=0;
    bool flag = false;
    while(st<=end){
        int m = (st+end)/2;
        if(arr[m]==target){
            key = m;
            flag = true;
            break;
        }else if(arr[m]>target){
            st = m+1;
        }else{
            end = m-1;
        }
    }
    if(flag){
        cout <<"Element found at index no. : " << key;
    }else{
        cout <<"Element not found";
    }
}
