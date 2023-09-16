//https://www.spoj.com/problems/CSUMQ/en/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int prefix_sum[N];
int a[N];
int main()
{
  int n; cin>>n; int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
    prefix_sum[0]=0;
  for(int i=1;i<=n;i++){
    prefix_sum[i]=prefix_sum[i-1]+a[i];
  }
  int t;cin>>t;
  while(t--){
    int l,r; cin>>l>>r;
     l++; r++;
    int sum=0;
    sum=prefix_sum[r]-prefix_sum[l-1];
    cout<<sum<<'\n';
  }
}
