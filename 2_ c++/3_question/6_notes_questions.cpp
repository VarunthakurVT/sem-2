#include <iostream>

void calculateMinimumNotes(int amount) {
    // 1. Declare a standard C-style array
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    // 2. Calculate the number of elements in the array
    int size = sizeof(denominations) / sizeof(denominations[0]);
    
    std::cout << "\nCalculating minimum notes for: " << amount << "\n";
    std::cout << "---------------------------------\n";

    // 3. Loop through the array using a traditional for-loop
    for (int i = 0; i < size; i++) {
        int note = denominations[i]; // Get the current note
        
        if (amount >= note) {
            // Find how many notes of this denomination we can use
            int count = amount / note; 
            
            // Print the result for this denomination
            std::cout << count << " * " << note << " notes\n";
            
            // Update the amount to the remaining balance
            amount = amount % note; 
        }

        // If the amount reaches 0, we can stop early
        if (amount == 0) {
            break;
        }
    }
}

int main() {
    int userAmount;

    // Prompt the user to enter the amount
    std::cout << "Enter the amount: ";
    std::cin >> userAmount;

    // Basic validation to ensure the amount is positive
    if (userAmount <= 0) {
        std::cout << "Please enter a valid positive amount.\n";
        return 1; // Exit the program with an error code
    }

    // Call the function with the user's input
    calculateMinimumNotes(userAmount);

    return 0;
}