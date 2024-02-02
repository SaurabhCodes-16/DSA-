#include<iostream>
using namespace std;

int binarysort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return 0;  // You don't need to return arr[], as the array is modified in-place.
}

int main() {
    int arr[] = {2, 6, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    binarysort(arr, n);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
