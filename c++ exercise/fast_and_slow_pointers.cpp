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

void check(node* head){
    bool checkk = false;
    node* p = head;
    node* q = head;
    while(p->next != nullptr && p->next->next != nullptr){
        p=p->next->next;
        q=q->next;
        if(p==q){
          checkk = true;  
          break;
        }
    }
    if(checkk){
        cout << "This linked list has a loop";
    }else{
        cout << "No loop";
    }
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = head->next;
    
    check(head);
    
}
