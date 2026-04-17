#include <fstream>
#include <iostream>

using namespace std;

// Define the structure for a Student
struct Student {
    char name[30];
    int age;
    float marks;
};

int main() {
    // Initialize a Student object
    Student s = {"John", 19, 85.5};

    // Open a file in binary mode for writing
    ifstream file("Student.dat", ios::binary);

    // Write the structure to the file
    // Casting the address of s to a char pointer to write raw bytes
    while(!file.eof()){
    file.read((char*)&s, sizeof(s));
    
    // Close the file stream
  
    
     cout<<"Name:"<<s.name;
     cout<<"\nAge:"<<s.age;
     cout<<"\nMarks:"<<s.marks<<endl;
    
    cout << "Data Saved Successfully" << endl;
    }
    file.close();


    return 0;
}