//we have an array [4,1,3] generate all sub subsequence
//we can do this by power set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PowerSet()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int num=0;num<(1<<n);num++)
    {
        vector<int>sub;
        for(int i=0;i<n;i++)
        {
            if(num&(1<<i))
            {
                sub.push_back(a[i]);
            }
        }
        for(auto it:sub)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    PowerSet();
}
