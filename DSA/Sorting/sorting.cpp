//sort function usually works for vectors not for plain array but using pointers we can do this shit!!
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
int arr[]={1,78,98,65,45};
sort(arr , arr+5);
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<endl;
}


return 0;


}