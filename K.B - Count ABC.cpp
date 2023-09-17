//https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;cin>>n;
  string s; cin>>s;
  int count=0;
  for(int i=0;i<n;i++){
    if(s[i]=='A' && s[i+1]=='B'&&s[i+2]=='C')
          count++;
  }
  cout<<count<<'\n';
 return 0;
}
