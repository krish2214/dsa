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

void insertion(node*&head, int pos){
    node* newnode = new node(25);
    node*p = head;
    node*q = nullptr;
    if(pos == 1){
        while(p->next!=head){
            q=p;
            p = p->next;
        }
        q->next = newnode;
        newnode->next = head;
        head = newnode;
        return;
        
    }
    for(int i=1; i<pos; i++){
        q=p;
        p = p->next;
    }
    q->next = newnode;
    newnode->next = p;
}

void printCircularLL(node* head){
    node*p = head;
    do{
        cout << p->data << " ";
        p = p->next;
    }while(p!=head);
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = head;
    cout << "Circular linked list : " << endl;
    printCircularLL(head);
    cout << endl;
    insertion(head,1);
    cout << "After insertion : " << endl;
    printCircularLL(head);
    
}
