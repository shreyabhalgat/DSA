// oding Problem
// Problem Statement: x to the power n
// Problem Level: EASY
// Problem Description:
// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
// Do this recursively.
// Input format :
// Two integers x and n (separated by space)

// Output Format :
// x^n (i.e. x raise to the power n)

// Constraints :
// 1 <= x <= 30
// 0 <= n <= 30

// Sample Input 1 :
//  3 4

// Sample Output 1 :
// 81


#include<iostream>
using namespace std;

int power(int x,int n)
{
    if(n==1)
    {
        return x;
    }

    int ans=power(x,n-1);
    return x*ans;
}

int main()
{
    int n,x;
    cout<<"enter the base value"<<endl;
    cin>>x;
    cout<<"Enter the index value"<<endl;
    cin>>n;
    
    int output=power(x,n);
    cout<<x<<"raised to power"<<n<<"is"<<output<<endl;
    return 0;
}
