#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void PrintBinary(char n){
  for(int i = 16 ; i >= 0 ; i--){
    if(n & (1<<i)){
      cout << 1;
    }else{
      cout << 0;
    }
  }
  cout<<endl;
}
int main(){
  ll n = 15;
  // for(char i = 'A' ; i <= 'D' ; i++){
  //   PrintBinary(i);
  // }
  // cout<<endl;
  // for(char i = 'a' ; i <= 'd' ; i++){
  //   PrintBinary(i);
  // }

  //convert upper case to lower case
  char c = 'B';
  c = c | (1<<5);
  cout<<c<<endl;

  //coverting lower case to upper case
  char d = 'a';
  d = d & ~(1<<5);
  cout<<d<<endl;
  
}
