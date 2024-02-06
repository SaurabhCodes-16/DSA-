#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout << &arr << endl;
         //arr indicates first block address
          cout << &arr[0] << endl; 

          int i = 4;
          int *p = &i;
          cout << p << endl;//prints address of i
          cout << *p << endl;//prints value saved in address

          // arr[i] = *(arr+i)

          cout << i[arr] << endl;//prints i th location
}