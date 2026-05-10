#include <iostream>
using namespace std;

int main() {
    // int a{};
    // cout << "Enter number: ";
    // cin >> a;

    // if (a == 0) {
    //     cout << "Binary: 0" << endl;
    //     return 0;
    // }

    // int b[32];
    // int index = 0;
    // int n = a;

    // while (n > 0) {
    //     b[index++] = n % 2;
    //     n /= 2;
    // }

    // cout << "Binary: ";
    // for (int i = index - 1; i >= 0; --i) {
    //     cout << b[i];
    // }
    // cout << endl;
 //this is the first method 
//  int n, bin=0,place=1,pos=0;
//  cout<<"Enter a number";
//  cin>>n;
//  while(n>0){
//     pos=n%2;
//     bin=bin+pos*place;
//     place*=10;qwee
//     n=n/2;
//  }
//  cout<<bin;
// for octal 
 
int n, bin=0,place=1,pos=0;
 cout<<"Enter a number";
 cin>>n;
 while(n>0){
    pos=n%8;
    bin=bin+pos*place;
    place*=10;
    n=n/8;
 }
 cout<<bin;
    return 0;
}  
