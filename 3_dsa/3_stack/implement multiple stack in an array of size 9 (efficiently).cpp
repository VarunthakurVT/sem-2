#include <iostream>
using namespace std;

class MultiStack {
    int *arr;       // The data array (size n)
    int *top;       // Top indices of k stacks
    int *next;      // Next item or next free slot
    int n, k;
    int free;       // Beginning of the free list

public:
    MultiStack(int k1, int n1) {
        k = k1; n = n1;
        arr = new int[n];
        top = new int[k];
        next = new int[n];

        // Initialize all stacks as empty
        for (int i = 0; i < k; i++) top[i] = -1;

        // Initialize all slots as free
        free = 0;
        for (int i = 0; i < n - 1; i++) next[i] = i + 1;
        next[n - 1] = -1; // End of free list
    }

    void push(int item, int sn) {
        if (free == -1) {
            cout << "Stack Overflow\n";
            return;
        }

        int i = free;      // Get first free slot
        free = next[i];    // Update free to next available slot
        next[i] = top[sn]; // Link new item to old top
        top[sn] = i;       // Update top to new index
        arr[i] = item;     // Put item in array
    }

    int pop(int sn) {
        if (top[sn] == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }

        int i = top[sn];   // Get current top index
        top[sn] = next[i]; // Update top to previous item
        next[i] = free;    // Add this slot back to free list
        free = i;

        return arr[i];
    }
};

int main() {
    MultiStack ms(3, 9); // 3 stacks, total size 9

    ms.push(10, 0); // Push 10 to stack 0
    ms.push(20, 0);
    ms.push(5, 1);  // Push 5 to stack 1
    
    cout << "Popped from stack 0: " << ms.pop(0) << endl;
    return 0;
}