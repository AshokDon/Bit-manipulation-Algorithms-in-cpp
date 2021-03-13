//find the maximum length of sub array whose xor is 0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void maxLenSubarrayWithXorZero()
{
    int n;
    cin>>n;
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
        if(xr==0)
        {
            maxLen=i+1;
        }
        else if(mpp.find(xr)!=mpp.end())
        {
            maxLen=max(maxLen,i-mpp[xr]);
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
