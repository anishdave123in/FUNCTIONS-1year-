#include <iostream>
using namespace std;

// Function to add two numbers using pointers
int add(int *a, int *b) {
    return *a + *b;
}

// Function to find the largest number using pointers
int largest(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    if (!(cin >> num1 >> num2)) { // Input validation
        cerr << "Invalid input. Please enter integers only.\n";
        return 1;
    }

    // Call functions using pointers
    int sum = add(&num1, &num2);
    int big = largest(&num1, &num2);

    cout << "Sum: " << sum << endl;
    cout << "Largest: " << big << endl;

    return 0;
}
