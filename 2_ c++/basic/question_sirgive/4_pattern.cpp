#include<iostream>
using namespace std; 
int main(){
    int n=10;

    for(int i=0;i<n;i++){
        int num1=9;
        //spaces
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        //num 1
        for(int j=0;j>=i+1;j){
            cout<<num1;
            num1--;
            
        }
        //num 2
        for(int j=i;j>0;j--){
            cout<<j;
        }
        
        cout<<endl;
    }
    return 0;
}