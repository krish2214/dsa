#include<iostream>
using namespace std;
union Student{
//    public:
    int age;
    int salary;
    
    void display(){
        cout << "My age is " << age << " and salary is " << salary << endl; 
    }
};

int main(){
    Student s1;
    s1.salary = 679;
    s1.display();
    Student s2;
    
    s2.salary = 567;
    s2.age = 19;
    s2.display();
}
