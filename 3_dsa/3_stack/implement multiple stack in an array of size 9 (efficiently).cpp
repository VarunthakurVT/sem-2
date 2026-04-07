#include <iostream>
using namespace std;

class MultiStack {
    int size;
    int* arr;
    int top1, top2;

public:
    MultiStack(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;       // Starts before the first index
        top2 = size;     // Starts after the last index
    }

    // Push into Stack 1
    void push1(int val) {
        if (top1 < top2 - 1) { // Check if there is space between tops
            arr[++top1] = val;
        } else {
            cout << "Stack Overflow in Stack 1" << endl;
        }
    }

    // Push into Stack 2
    void push2(int val) {
        if (top1 < top2 - 1) {
            arr[--top2] = val;
        } else {
            cout << "Stack Overflow in Stack 2" << endl;
        }
    }

    // Pop from Stack 1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1];
            top1--;
        } else {
            cout << "Stack 1 Underflow" << endl;
            return -1;
        }
    }

    // Pop from Stack 2
    int pop2() {
        if (top2 < size) {
            return arr[top2];
            top2++;
        } else {
            cout << "Stack 2 Underflow" << endl;
            return -1;
        }
    }

    void printStacks() {
        cout << "Stack 1: ";
        for (int i = 0; i <= top1; i++) cout << arr[i] << " ";
        cout << "\nStack 2: ";
        for (int i = size - 1; i >= top2; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MultiStack ms(6); // One array of size 6 for both stacks

    ms.push1(10);
    ms.push1(20);
    ms.push2(100);
    ms.push2(90);
    ms.push2(80);

    ms.printStacks();

    cout << "Popped from Stack 2: " << ms.pop2() << endl;
    
    ms.printStacks();

    return 0;
}