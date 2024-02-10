#include<iostream>
using namespace std;
int main()
{
   int* dynamicVar = new int; // Dynamic memory allocation in C++
*dynamicVar = 30;
 // Deallocate dynamically allocated memory
 cout << *dynamicVar << endl;
}