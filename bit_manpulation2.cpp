//given an array except two numbers remaining all appears for 2
//times find out that two numbers appear for once
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void determingNumber()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    //find the right most set bit position
    int bitposition=0;
    while (res!=0)
    {
        if(res&1==1)
        {
            break;
        }
        res=res>>1;
        bitposition++;
    }
    //seggregate numbers on basis of bitposition set or unset
    int set1=0,unset=0;
    for(int i=0;i<n;i++)
    {
        //xor the numbers whose right most bit is set
        if((arr[i]&(1<<bitposition))>0)
        {

            set1=set1^arr[i];
        }
        //xor the numbers whose right most bit is unset
        else{
            unset=unset^arr[i];
        }
    }
    if(set1<unset)
    {
        cout<<set1<<" "<<unset<<endl;
    }
    else{
        cout<<unset<<" "<<set1<<endl;
    }
}
int main()
{
    determingNumber();
}
