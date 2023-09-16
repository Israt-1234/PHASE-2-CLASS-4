#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,k="";
  cin>>s;
  for(int i=1;i<=s.size();i++) {
    if(i%2!=0)
        k=k+s[i-1];
  }
  cout<<k<<'\n';
  return 0;
}
