#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int lastocc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}
int main() {
    int even[] = {2, 4, 6, 8, 8, 8, 8, 10};
    int result = firstocc(even, 8, 8);
    int result2 = lastocc(even, 8, 8);
    cout << "First occurrence is " << result;
    cout << "Last occurrence is " << result2;
    return 0;
}
