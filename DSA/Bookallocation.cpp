#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid);

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            studentcount++;
            if (studentcount > m || arr[i] > mid) {
                return false;
            }

            pagesum = arr[i];
        }
    }

    return true;
}

int main() {
    // Example usage:
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;  // Number of students

    int result = allocateBooks(arr, n, m);

    if (result != -1) {
        cout << "Minimum number of pages each student should read: " << result << endl;
    } else {
        cout << "Allocation not possible with given constraints." << endl;
    }

    return 0;
}

