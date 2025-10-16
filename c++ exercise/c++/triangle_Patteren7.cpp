#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            cout << char(ch+j-1) << " ";
        }
        cout << endl;
    }
}