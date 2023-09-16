//https://www.spoj.com/problems/OLOLO/en/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
   int sum=0;
  while(n--) {
    int t;
    cin>>t;
    sum=sum^t;
  }
  cout<<sum<<'\n';
}
