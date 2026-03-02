// * means 
#include<iostream>
using namespace std; 
int main(){
    int i=3;
    int *j;
    j=&i;
    cout<<i<<endl;
    cout<<&i<<endl; 
    cout<<*(&i)<<endl;
    cout<<*j; //*means the value at j

}