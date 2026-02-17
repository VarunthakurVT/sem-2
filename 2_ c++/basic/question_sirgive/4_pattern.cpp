#include<iostream>
using namespace std; 
int main(){
    int n=8;
    for(int i=0;i<n;i++){
        //spaces
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        //num 1
        for(int j=9;j>=n;j--){
            cout<<j;
            
        }
        //num 2
            for(int j=9;j>=n;j--){
            cout<<j;
            }
        
        cout<<endl;
    }
    return 0;
}