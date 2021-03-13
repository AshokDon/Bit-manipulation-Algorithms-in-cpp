//code force B.petr and a combination lock
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PetrAndCombo()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int num=0;num<(1<<n);num++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(num&(1<<i))
            {
                sum-=a[i];
            }
            else
            {
                sum+=a[i];
            }
        }
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    PetrAndCombo();
}
