#include <iostream>
#include <algorithm>  // For sort() function, optional here for simplicity
using namespace std;

// Function to sort the roll numbers (using simple bubble sort)
void Sorting(int rollnumber[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (rollnumber[j] > rollnumber[j + 1]) {
                // Swap rollnumber[j] and rollnumber[j+1]
                int temp = rollnumber[j];
                rollnumber[j] = rollnumber[j + 1];
                rollnumber[j + 1] = temp;
            }
        }
    }
}

// Function to display the roll numbers
void display(int rollnumber[], int n) {
    cout << "Sorted Roll Numbers:\n";
    for (int i = 0; i < n; ++i) {
        cout << rollnumber[i] << endl;
    }
}

// Function to perform Linear Search
void LinearSearch(int rollnumber[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (rollnumber[i] == target) {
            cout << "Student with Roll No " << target << " is enrolled.\n";
            return;  // Exit the function once found
        }
    }
    cout << "Student with Roll No " << target << " isn't enrolled.\n";
}

int main() {
    int n;

    cout << "Enter total number of students: ";
    cin >> n;

    int rollnumber[n];

    // Input roll numbers
    cout << "Enter the roll numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> rollnumber[i];
    }

    // Sorting the roll numbers
    Sorting(rollnumber, n);

    // Displaying sorted roll numbers
    display(rollnumber, n);

    // Search for a specific roll number
    int target;
    cout << "Enter roll number to search: ";
    cin >> target;

    // Perform Linear Search
    LinearSearch(rollnumber, n, target);

    return 0;
}
