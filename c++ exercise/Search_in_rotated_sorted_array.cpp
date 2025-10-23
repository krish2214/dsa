#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={4,5,6,7,0,1,2};
    int target = 0, st = 0, end = n-1; // key=0;
  //  bool flag = false;
    while(st<=end){
        int m = (st+end)/2;
        if(arr[m]==target){
            cout << m;
            break;
        }else if(arr[st]<=arr[m]){
            if(target>=arr[st] && target<arr[m]){
                end = m-1;
            }else{
                st = m+1;
            }
            
        }else{
            if(target>arr[m] && target<=arr[end]){
                end = m-1;
            }else{
                st = m+1;
            }        
         }
    }
}
