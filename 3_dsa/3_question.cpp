#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void display(Node*head){
    Node*p=head;
    while(p){
        cout<<p->data<<"->",
        p=p->next;}
        cout<<"node";
    }
int main(){
    Node*n1=new Node(5);
    Node*n2=new Node(6);
    Node*n3=new Node(9);
    n1->next=n2;
    n2->next=n3;
    display(n1);

}