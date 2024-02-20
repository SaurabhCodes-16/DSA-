#include<iostream>
using namespace std;
 bool checkPalindrome(string str , int i , int j)
 {
    //base case
    if(i>j)
    return true;

    if(str[i]!=str[j])
    return false;

    else{
        checkPalindrome(str , i++ , j--);
    }
 }



 