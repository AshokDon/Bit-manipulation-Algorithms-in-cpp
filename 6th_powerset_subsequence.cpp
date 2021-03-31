//we have an array [4,1,3] generate all sub subsequence
//we can do this by power set
// first know what is subarray and subsequency 
//[4,1,3] -->subarrays-->[4],[4,1],[4,1,3],[1],[1,3],[3] continues parts
//[4,1,3] -->subsequence -->[],[4],[1],[4,1],[3],[4,3],[1,3],[4,1,3] random pic but pic the index only once in the subsequence
//we can use power set Alograthim to generate the subsequence
//[4,1,3]-->length=3 total we have 2 power 3 subsequence that is 8
//0 --> 0 0 0 -->[] no pick is done
//1 --> 0 0 1 -->[4]   pick 0th index element sence set bit is at first
//2 --> 0 1 0 -->[1]   pick 1st index element sence set bit is at second
//3 --> 0 1 1 -->[4,1] pick 0th and 1st index elements sence set bits are at 0th and 1st
//4 --> 1 0 0 -->[3]   pick  2nd index element scence set bit is at third index
//5 --> 1 0 1 -->[4,3] pick 0th and 2nd index element sence set bits are at 0th and 2nd index
//6 --> 1 1 0 -->[1,3] pick 1st and 2nd index elements sence set bits are at 1st and 2nd index
//7 --> 1 1 1 -->[4,1,3] pick all the elements since all are set bits
// this is the power set alograthim to find sub sets
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
