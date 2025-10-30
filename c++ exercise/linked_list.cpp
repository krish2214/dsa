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

void printll(node* head){
    node* p = head; 
    while(p!=NULL){
        cout << p->data <<" ";
        p = p->next;
    }
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printll(head);
    
}
