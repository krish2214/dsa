#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age = 21;
    
    void display(){
        cout << "My name is " << name << " and my age is " << age << endl; 
    }
};

int main(){
    Student s1;
    s1.name = "Krishna Sharma";
    s1.display();
    Student s2;
    s2.name = "Vikas";
    s2.age = 19;
    s2.display();
}
