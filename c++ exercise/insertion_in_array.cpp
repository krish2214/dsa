#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={3,1,2,4,5};
    int pos = 2, value = 21;
    int brr[n+1], i=0;
    for(i=0; i<pos; i++){
        brr[i] = arr[i];
    }
    brr[pos] = value;
    for(i=3; i<n+1; i++){
        brr[i]=arr[i-1];
    }
    for(i=0; i<n+1; i++){
        cout << brr[i] <<" ";
    }
}
