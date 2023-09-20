// https://codeforces.com/problemset/problem/1389/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--){
   long long l,r; cin>>l>>r;
   int x,y;
   x=l;
   y=2*l;
   if(y<=r) cout<<x<<" "<<y<<'\n';
   else
   cout<< -1<<" "<<-1<<'\n';

   }
   return 0;
}

