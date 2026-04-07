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
    Student s = {"varun ", 13, 84.5};

    // Open a file in binary mode for writing
    ofstream file("Student.dat", ios::binary|ios::app);

    // Write the structure to the file
    // Casting the address of s to a char pointer to write raw bytes
    file.write((char*)&s, sizeof(s));

    // Close the file stream
    file.close();

    cout << "Data Saved Successfully" << endl;

    return 0;
}