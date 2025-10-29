#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int brr[n+1];
    brr[0] = target;
    for(int i=0; i<n; i++){
        brr[i+1] = arr[i];
    }
    
    cout << "Final array : ";
    
    for(int i=0; i<=n; i++){
        cout << brr[i] << " ";
    }
    
    return 0;
}
