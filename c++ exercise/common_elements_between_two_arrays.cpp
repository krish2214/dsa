#include<iostream>
using namespace std;

int main(){
    
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int m ;
    cin >> m;
    int brr[n];
    for(int i=0; i<m; i++){
        cin >> brr[i];
    }
    
    int crr[n];
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(brr[j] == arr[i]){
                crr[count] = arr[i];
                count++;
                break;
            }
        }
    }
    cout << "Common elements : ";
    if(count == 0){
        cout << "None";
    }else{
        for(int i=0; i<count; i++){
            cout << crr[i] << " ";
        }
    }
    
    return 0;
}
