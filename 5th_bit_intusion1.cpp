//find the maximum length of sub array whose xor is k
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void maxLenSubarrayWithXorZero()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>mpp;
    int xr=0;
    int maxLen=0;
    for(int i=0;i<n;i++)
    {
        xr=xr^a[i];
        if(xr==k)
        {
            maxLen=i+1;
        }
        else if(mpp.find(xr^k)!=mpp.end())
        {
            maxLen=max(maxLen,i-mpp[xr^k]);
        }
        else{//update only if it is not found
            mpp[xr]=i;
        }
    }
}
int main()
{
    maxLenSubarrayWithXorZero();
}
