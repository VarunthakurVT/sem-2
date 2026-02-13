// 3_create a class which can shore marks of 3 subjects PCM. and main program can run for 50 students

#include<iostream>
#include<string>
using namespace std;
class Subjects{
    public:
    int Physics;
    int Maths;
    int Chemistry;
    void getData() {
        cout << "Enter physics marks: ";
        cin >> Physics;
        cout << "Enter maths marks : ";
        cin >> Maths;
        cout<<"Enter Chemistry marks: ";
        cin >> Chemistry;
    }
    void display() {
        cout << "Physics: " << Physics << ", Maths: " << Maths << ", Chemistry: " << Chemistry << endl;
    }
};

int main() {
    Subjects students[50];  // Array of 50 student objects

    cout << "Enter marks for 50 students:" << endl;
    for(int i = 0; i < 50; i++) {  // Fixed: i<50, not <=50 to avoid overflow
        cout << "\nStudent " << (i+1) << ":" << endl;
        students[i].getData();  // Call getData() on each student object
    }

    cout << "\nDisplaying marks for all students:" << endl;
    for(int i = 0; i < 50; i++) {
        cout << "Student " << (i+1) << ": ";
        students[i].display();  // Fixed: display() method, not getInfo
    }

    return 0;
}