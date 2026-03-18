#include<iostream>
using namespace std;
class Stack{
    public:
  int TOS=-1;
  int arr[5];
  int n=5;
  void push(int val){
    if(TOS==n-1){
      cout<<"stack is overflow";
      return;
    }else{
        TOS++;
        arr[TOS]=val;
    }
  }
  void pop(){
    if(TOS==n-1){
        cout<<"stack is overflow";
        return;
    }else{
        int y=arr[TOS];
        TOS--;
       
    }
  }
  void print(){
  if(TOS==-1){
    cout<<"the stack is empty";
  }else{
    for (int i=TOS;i>=0; i--){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}}
  

};
int main(){
    Stack s;
    s.push(3);
    s.push(4);
    s.push(9);
    s.pop();
    s.print();

}

