#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << p << endl; // Let address be a;
    cout << p2 << endl;// then this


}