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
Node* findNode(Node*first,int x){
    Node*temp=first;
    while(temp){
        if(temp->data==x)
        return temp;
        else{
            temp=temp->next;
        }
    }
    return NULL;
}

