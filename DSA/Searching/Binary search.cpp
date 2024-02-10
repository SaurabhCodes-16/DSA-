#include<iostream>
using namespace std;

int binarysearch(int arr[], int key, int size) {
    int start = 0;
    int end = size;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int asc[] = {1, 2, 3, 4, 5, 6, 7, 8,8};
    int des[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int ascIndex = binarysearch(asc, 8, 9);
    int desIndex = binarysearch(des, 5, 10);
    
    cout << "First occurrence index in ascending order array: " << ascIndex << endl;
    cout << "second occurrence index is " << ascIndex+1 << endl;

    return 0;
}
