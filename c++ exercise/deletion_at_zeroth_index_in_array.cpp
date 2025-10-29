#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Final array after deleting zeroth index : ";
    for(int i=1; i<n; i++){
        cout <<arr[i] << " ";
    }
}
