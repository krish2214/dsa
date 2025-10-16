#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter a number: ";
    cin >> a;
    cout <<"Enter another number: ";
    cin>>b;
    cout <<"Sum = "<<(a+b)<<endl;
    cout <<"difference = "<<(a-b)<<endl;
    cout <<"product = "<<(a*b)<<endl;
    cout <<"Division = "<<(a/b)<<endl;
    cout <<"Modulus = "<<(a%b)<<endl; 
    int c=10,d;
    d=++c;
    cout <<"Value of d = "<< d << endl;
    cout <<"Value of c = "<< c << endl;
    int e=15,f;
    f=e++;
    cout <<"Value of f = "<< f << endl;
    cout <<"Value of e = "<< e << endl;
    int g=20,h;
    h=--g;
    cout <<"Value of h = "<< h << endl;
    cout <<"Value of g = "<< g << endl;
    int i=25,j;
    j=i--;
    cout <<"Value of j = "<< j << endl;
    cout <<"Value of i = "<< i << endl;

    return 0;
}