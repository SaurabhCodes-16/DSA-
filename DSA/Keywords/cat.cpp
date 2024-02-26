#include<iostream>
using namespace std;
int main()
{   int N;
    cout<<"Enter the number of houses" << endl;
    cin>>N;
    cout<< "Enter the pets patter" << endl;
    char pets[20];
    cin>>pets;

    for(int i = 0 ; i<20 ; i++)
    {
     if(pets[i] == 63)
     {
        if(pets[i-1] == 67)
        {
            pets[i] = 68;
        }
        else{
            pets[i] = 67;
        }
     }
     
}
       for(int i = 0 ; i<5 ; i++)
       {
        cout<<pets[i];
       }
       cout<<endl;
}