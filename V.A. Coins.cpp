// https://codeforces.com/problemset/problem/1061/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int ans=0;
    while(sum>=n){
     ans++;             //ans=sum/n;
     sum-=n;            // if(sum%n>=1)
    }                   // ans++; cout<<ans;
    if(sum>=1){           //or sum+n-1/n
        ans++;              //or(ceil((double)sum/n))
    }
   cout<<ans<<endl;
}
