// in the stack memory the memory 
// we have to make the programme to put and pop the element from the stack memory 
#include<iostream>
#include<process.h>
using namespace std; 
class Stack
{
    protected:
    int st[3];
    int top;
    Stack()
    {top=-1;}
    void push (int var){
        st[++top]=var;
    }
    public:
    int pop()
{
    return st[top--];
}
};
class Stack2 :public Stack{
    public:
    void push (int var)
    {
        if(top>3){
            cout<<"\n Earror :stack is full";
            exit(1);  //this exit whole condition in this after this nothing works 
        }
        Stack::push(var);
    }
    int pop(){
        if(top<0)
        {
            cout<<"\nEven: stack is empty";
            exit(1);
        }
        return Stack::pop();
    }
};
int main(){
 Stack2 S1;
 S1.push(11);
 S1.push(34);
 S1.push(3423);
 S1.push(3423);
 S1.push(3423);
 S1.push(3423);
cout<<endl<<S1.pop();
cout<<endl<<S1.pop();



}