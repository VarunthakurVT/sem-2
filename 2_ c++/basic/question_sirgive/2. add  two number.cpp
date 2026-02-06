#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    while(b!=0){
        int carry =(a&b)<<1;
        a=a^b;
        b=carry;
    }
    cout<<a;
}