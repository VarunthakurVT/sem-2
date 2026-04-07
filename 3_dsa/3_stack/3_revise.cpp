#include <iostream>
using namespace std;

class Stack {
public:
    int TOS = -1;
    int arr[5];
    int n = 5;

    void push(int val) {
        if (TOS < n - 1) arr[++TOS] = val;
    }

    int pop() {
        if (TOS == -1) return -1;
        return arr[TOS--];
    }

    void print() {
        for (int i = TOS; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

// Function to reverse stack using two temporary stacks
void reverseStack(Stack &original) {
    Stack temp1, temp2;

    // Step 1: Move everything from Original to Temp1 (Order flips)
    while (original.TOS != -1) {
        temp1.push(original.pop());
    }

    // Step 2: Move everything from Temp1 to Temp2 (Order flips back)
    while (temp1.TOS != -1) {
        temp2.push(temp1.pop());
    }

    // Step 3: Move everything from Temp2 back to Original (Order flips again = Reversed!)
    while (temp2.TOS != -1) {
        original.push(temp2.pop());
    }
}

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original Stack: ";
    s.print();

    reverseStack(s);

    cout << "Reversed Stack: ";
    s.print();

    return 0;
}