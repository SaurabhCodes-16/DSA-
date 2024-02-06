#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char name[100];
    cin.getline(name, 100);

    int n = strlen(name) - 1;

    for (int i = 0; i < n / 2; i++) {
        swap(name[i], name[n - i]);
    }

    cout << "Reversed string is: " << name << endl;

    return 0;
}
