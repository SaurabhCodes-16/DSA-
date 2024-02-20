#include<iostream>
using namespace std;

int Sum(int arr[], int n)
{   
    if (n == 0)
        return 0;

    int add = arr[0]; // Initialize add with the current element
    int next = Sum(arr + 1, n - 1); // Recursively call Sum with the next element
    return add + next; // Return the sum of the current element and the sum of the rest of the array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int result = Sum(arr, n);
    cout << result;
    return 0;
}
