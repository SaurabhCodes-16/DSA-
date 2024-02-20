#include<iostream>
using namespace std;
bool linearsearch(int arr[] , int size , int key)
{
    //base case
    if(size==0)
    {return false;}

    if(key == arr[0])
    return true;

    else{
        bool remainingPart = linearsearch(arr + 1,size-1,key);
        return remainingPart;
    }
}


int main()
{
    int arr[5]={1,4,6,7,8};
    int n = 5;

    bool ans = linearsearch(arr,n,5);

    if(ans)
    cout<<"Milgya bhai";

    else
    cout<< "lund lele";
}