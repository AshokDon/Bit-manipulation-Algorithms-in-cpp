#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //count the set bits for a given number
    int n;
    cin>>n;
    int c;
    while(n!=0){
        if(n&1==1)
        {
            c++;
        }
        n=n>>1;
    }
    cout<<c<<endl;
    //by using stl to count set bits
    int cc=__builtin_popcount(5);
    cout<<cc;
    //for long numbers
    long long num;
    int cl=__builtin_popcountll(num);
    return 0;
}
