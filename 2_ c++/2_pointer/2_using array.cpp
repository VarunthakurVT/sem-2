#include<iostream>
using namespace std;
int main(){
    int a[5]={20,30,40,50,60};
    for (int i =0; i<5;i++){
        cout<<"value of "<<(a+i)<<" is " <<*(a+i)<<endl;

    }
    return 0;
}