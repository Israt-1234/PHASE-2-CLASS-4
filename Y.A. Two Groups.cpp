//https://codeforces.com/problemset/problem/1747/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int  t; cin>>t;
    while(t--){
        int n;cin>>n; ll a[n];
       ll sum=0,sum1=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]<0)
                sum=(sum+abs(a[i]));
           else if(a[i]>=0)
                sum1=sum1+a[i];
        }
        cout<<abs(sum-sum1)<<'\n';
    }
    return 0;
}
