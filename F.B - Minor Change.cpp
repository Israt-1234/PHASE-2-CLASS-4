//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s,t;
     cin>>s>>t;
     int count=0;
     for(int i=0;i<s.size();i++){
        if(s[i]!=t[i])
            count++;
     }
     if(count>0) cout<<count<<'\n';
     else cout<<0<<'\n';
     return 0;
}
