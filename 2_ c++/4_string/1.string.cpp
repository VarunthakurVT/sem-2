#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char*str;
public:
   String(char*s){
    int length=strlen(s);
    str=new char[length+1];
    strcpy(str,s);
   } 
~String()
 {
    cout<<"deleting str\n";
 delete[]str;
}
void display(){
    cout<<str<<endl;
}
};
int main(){
String s1="keep calem &cool";
cout<<"S1=";
s1.display();
return 0;
}
