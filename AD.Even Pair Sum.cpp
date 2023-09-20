//https://www.codechef.com/problems/EVENPSUM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t; cin>>t;
   while(t--) {
    ll a,b; cin>>a>>b;
     if(a%2!=0 && b%2!=0 ) cout<<((a*b)/2)+1<<'\n';
     else
        cout<<a*b/2<<'\n';
   }
   return 0;
}
