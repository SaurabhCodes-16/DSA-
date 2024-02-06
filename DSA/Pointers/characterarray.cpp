#include<iostream>
using namespace std;
int main()
{
    char ch[6] = "abcde";
    cout << ch << endl;

    char *ptr = &ch[0];
    cout << ptr << endl;



    //Attention here everybody
    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    // will print until it finds out null character
}