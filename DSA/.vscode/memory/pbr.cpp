#include<iostream>
using namespace std;

int& func(int a){ 
    int num = a;
    int& ans = num;
    return ans;
}
//This C++ function func is quite dangerous as it returns a reference to a local variable num, which will lead to undefined behavior when accessed outside the scope of func
int main()
{  int a = 5;
    //new memory is created in pass by value(copied)
    //used memory is indiacted or referred in pass by refrence

    func(a);
    cout<<a<<endl;
}