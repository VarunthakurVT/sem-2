//price of the amount that addition do 
// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout<<"enter the amount";
//     cin>>amount;
//       cout<<amount<<"\n";
//     amount=amount%10;
//     cout<<amount;
//     return 0;
// }
//the logic i think about it but this is wrong because i do not understand question 

#include <iostream>
using namespace std;

int main() {
    int amount;
    
    cout << "Enter amount: .";
    cin >> amount;
    
    cout << "\nBreakdown for ." << amount << ": the 2000 note is ban" << endl;
    cout << "--------------------------" << endl;
    
    int notes[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1};
    string names[] = { "Five Hundred", "Two Hundred", 
                      "One Hundred", "Fifty", "Twenty", "Ten", 
                      "Five", "Two", "One"};
    
    int remaining = amount;
    
    for(int i = 0; i < 10; i++) {
        if(remaining >= notes[i]) {
            
            int count = remaining / notes[i];
            remaining = remaining % notes[i];
            
      
            if(count > 0) {
                cout << "rs" << notes[i] << " (" << names[i] << ")";
                cout << "\t: " << count << " note(s)" << endl;
            }
        }
    }
    
    if(remaining > 0) {
        cout << "Remaining: rs" << remaining << " (coins)" << endl;
    }
    
    return 0;
}
//this is correct logic but understand properly i copy it
