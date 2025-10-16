#include<iostream>
#include<string>
using namespace std;
struct Student{
  //  private:
    string name;
    int roll;
    
    void display(){
        cout << "Name is : " << name << " and roll no. is : " << roll << endl;
    }
};

int main(){
    Student s1;
    s1.name = "krishna";
    s1.roll = 20;
    Student s2;
    s2.name = "vikas";
    s2.roll = 23;
    s1.display();
    s2.display();
}
