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

void printLL(node*head){
    node* p = head;
    while(p!=NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

void deletion(node*& head, int pos){
    node* p = head;
    node* q = nullptr;
    if(pos==1){
        head = head->next;
        delete p;
        return;
    }
    for(int i=1; i<pos; i++){
        q=p;
        p = p->next;
    }
    q->next = p->next;
    delete p;
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    cout << "Before deletion : ";
    printLL(head);
    cout << endl;
    deletion(head,1);
    cout << "After deletion : ";
    printLL(head);
}
