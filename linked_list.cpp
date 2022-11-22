#include<iostream>
using namespace std;

class Student {
   public:
      int id;
      string name;
};

class node{
public:
    int data =0;
    node *next;
};


class linkedlist{
private:
    node *head;
    node *tail;

public:
    linkedlist(){
    this->head = NULL;
    this->tail = NULL;
    }

    void createNewnode(int data){
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
    tail->next = temp;
    tail = temp;
    }
    }

    void showlist(){
    while(head->data != NULL){
        cout<<head->next<<" ";
        head = head->next;
    }
    }
};

int main(){
linkedlist *mylist = new linkedlist();
Student s1;
    s1.id = 201;
    s1.name = "Sonoo Jaiswal";
mylist->createNewnode(s1.id);
return 0;
}
