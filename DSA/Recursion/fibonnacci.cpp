#include<iostream>
using namespace std;

void fibonacci(int n, int a = 0, int b = 1, int count = 0)
{   
    if (count == n)
        return;

    cout << a << " ";
    fibonacci(n, b, a + b, count + 1);
}

int main()
{   
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";
    fibonacci(n);
    cout << endl;

    return 0;
}
