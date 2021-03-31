#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //you will be given n and your task is to do xor ^ operation
    //loop from 1 to n 
    //constraints 1<=n<=10 power 18
    //Brute Force method
    int n;
    cin>>n;
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res=res^i;
    }
    cout<<res;
    //time complexity o(n)
    //algorithm to reduce
    //n=1-->1 -->n%4=1-->1
    //n=2-->1^2-->3 -->n%4=2-->n+1=3
    //n=3-->1^2^3-->0 -->n%4=3-->0
    //n=4-->1^2^3^4-->4 -->n%4=0 -->n=4
    //n=5-->1^2^3^4^5-->1 -->n%4=5%4=1 -->1
    //n=6-->1^2^3^4^5^6-->7 -->n%4=6%4=2 -->n+1-->7
    //n=7-->1^2^3^4^5^6^7-->0 -->n%4=7%4=3 -->0
    //n=8-->1^2^3^4^5^6^7^8-->8 -->n%4=8%4=0 -->n -->8
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
