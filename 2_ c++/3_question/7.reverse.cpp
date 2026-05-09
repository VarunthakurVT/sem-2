#include<iostream>
using namespace std; 
int main(){
    int a{};
    cin>>a;
    int temp=a;
   int reminder;
   int reverse=0;
    while(a!=0)
{    reminder=a%10;
    reverse=(reverse*10)+reminder;
     a=a/10;
    
    
    }
    if(temp==reverse){
        cout<<"Palindrome number "<<endl;
    }else{
        cout<<"not a Palindrome number"<<endl;
    }
    cout<<reverse;


    return 0;

}