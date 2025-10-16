#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch = 'A';
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << "After the completion of loop the next character is : " << ch << endl;
    return 0;
}