#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //you will be given n and your task is to do xor ^ operation
    //from 1 to n
    //constraints 1<=n<=10 power 18
    //Brute Force method
    int n;
    cin>>n;
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res=res^i;
    }
    //cout<<res;
    //time complexity o(n)
    //algorithm to reduce
    if(n%4==0){
        cout<<n;
    }
    else if(n%4==1)
    {
        cout<<1;
    }
    else if(n%4==2)
    {
        cout<<n+1;
    }
    else
    {
        cout<<0;

    //time complexity o(1)
}
