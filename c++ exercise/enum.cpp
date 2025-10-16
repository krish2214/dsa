#include<iostream>
//#include<string>
using namespace std;
enum colour{
    RED=12, BLUE, GREEN
};


int main(){
    colour c = GREEN;
    if(c == GREEN){
        cout << "Colour is green : " << c;
    }else if(c == BLUE){
        cout << "Colour is blue";
    }else{
        cout << "COlour is red";
    }
}
