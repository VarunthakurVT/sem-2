#include<iostream>
using namespace std;

void toUpper(char* str) {  
    char* p = str;         
    
    while(*p != '\0') {    //"\o this have last of the string"  
        if(*p >= 'a' && *p <= 'z') {
            *p = *p - 32;  
        }
        p++;              
    }
}
int main() {
    char s[100];
    cout << "Enter lowercase: ";
    cin >> s;
    toUpper(s);          
    cout << "Uppercase: " << s << endl;
  
    return 0;
}  
       