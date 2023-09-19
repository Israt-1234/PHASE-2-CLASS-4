//https://codeforces.com/problemset/problem/1743/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t; cin>>t;
   while(t--) {
        int  n;   cin>>n;
       cout<<1<<" ";
    for(int i=n;i>1;i--)
        cout<<i<<" ";
    cout<<'\n';
   }
   return 0;
}
