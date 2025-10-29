#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int p = m+n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int brr[m];
    for(int i=0; i<m; i++){
        cin >> brr[i];
    }
    
    int crr[p];
    for(int i=0; i<n; i++){
        crr[i] = arr[i];
    }
    for(int i=0; i<m; i++){
        crr[n+i] = brr[i];
    }
   
    for(int i=0; i<p-1; i++){
        for(int j=0; j<p-i-1; j++){
           if(crr[j]>crr[j+1]){
               swap(crr[j], crr[j+1]);
           }
        }
    }
    cout << "Final sorted array : ";
     for(int i=0; i<p; i++){
        cout << crr[i] << " ";
    }
}
