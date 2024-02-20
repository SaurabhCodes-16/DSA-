#include<iostream>
using namespace std;

void reverse(char arr[], int start, int end) {
    if (start >= end) // base case
        return;

    // swap characters at start and end positions
    swap(arr[start], arr[end]);

    // recursively call reverse with updated start and end positions
    reverse(arr, start + 1, end - 1);
}

int main() {
    char arr[] = "Saurabh";
    int size = sizeof(arr) - 1; // size of array excluding null terminator
    
    // Reverse the array
    reverse(arr, 0, size - 1);

    // Output the reversed array
    cout << arr << endl;

    return 0;
}
