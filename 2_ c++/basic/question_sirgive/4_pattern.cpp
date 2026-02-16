#include<iostream>
using namespace std; 
int main(){
    int n=10;
    for(int i=0;i<n;i++){
        //spaces
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        int num1=9;
        //num 1
        for(int j=1;j<=i+1;j++){
            cout<<num1;
            num1--;
            
        }
        //num 2
        int num2=9;
        for(int j=i;j>0;j--){
            cout<<num2;
            num2--;
        }
        
        cout<<endl;
    }
    return 0;
}