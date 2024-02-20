#include<iostream>
using namespace std;
bool isSorted(int arr[] , int size)
{
    //base case
    if(size==0 || size==1)
    {return true;}

    if(arr[0]>arr[1])
    return false;

    else{
        bool remainingPart = isSorted(arr + 1,size-1);
        return remainingPart;
    }
}


int main()
{
    int arr[5]={1,4,6,7,8};
    int n = 5;

    bool ans = isSorted(arr,n);

    if(ans)
    cout<<"Sorted hai bhai";

    else
    cout<< "Sorted nhi hai";
}