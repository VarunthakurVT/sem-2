#include <iostream>
using namespace std;

int main() {
    int a{};
    cout << "Enter number: ";
    cin >> a;

    if (a == 0) {
        cout << "Hexadecimal: 0" << endl;
        return 0;
    }

    char hex[32];
    int index = 0;
    int n = a;


    while (n > 0) {
        int digit = n % 16;
        if (digit < 10) {
            hex[index++] =  '0'+digit;
        } else {
            hex[index++] = 'A' + (digit - 10);
        }
        n /= 16;
    }
    cout << "Hexadecimal: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << hex[i];
    }
    cout << endl;
    return 0;
}
