#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this -> data = d;
        this-> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getlength(Node* head){
    Node* temp = head;
    int len=0; 

    while(temp != NULL ) {
        len++;
        temp = temp -> next;
    }
    return len;

}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    cout<<

    return 0;
}