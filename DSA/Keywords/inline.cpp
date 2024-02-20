#include<iostream>
using namespace std;
//where the compiler replaces a function call with the body of the function itself, rather than executing the function as a separate unit. 
inline int square(int x){
    return x*x;
}

int main()
{
    int num = 5;
    int result = square(num);
    cout<<"Sqaure of" << num << "is:" << result << endl;

    return 0;
}