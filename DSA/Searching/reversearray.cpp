#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0, e = v.size() - 1;
    while (s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    cout << "Reversed array is ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return v;
}

int main() {
    vector<int> V;
    V.push_back(6);
    V.push_back(67);
    V.push_back(64);
    V.push_back(65);

    // Get the reversed vector and store it in a new vector
    vector<int> reversedV = reverse(V);

    return 0;
}
