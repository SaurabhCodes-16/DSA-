#include <iostream>
using namespace std;
long long int sqrt(int n)
{
int s = 1;
int e = n;
int mid = s + (e-s)/2;
int square = mid*mid;
int ans = -1;
while(s<=e)
{
if(square == n)
{ return mid;}

else if(square<n)
{ s = mid +1;
ans = mid;
         }

else
{ e = mid - 1; }

mid = s + (e-s)/2;
square = mid*mid;
}
return ans;

}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
int root = sqrt(n);
cout<<"SqaureRoot of number is "<<  root << endl;

return 0;

}