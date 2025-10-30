// You are using GCC
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    
    node(int value){
        data = value;
        next = nullptr;
    }
};

void printCircularll(node* head){
    node* p = head; 
    do{
        cout << p->data << " ";
        p = p->next;
    } while(p!=head);
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = head;
    printCircularll(head);
    
}
