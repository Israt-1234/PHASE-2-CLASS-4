#include<bits/stdc++.h>
using namespace std;
const int N=2000007;
int prefix_sum[N];
int a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++)
        cin>>a[i];
        prefix_sum[0]=0;
        for(int i=1;i<=n;i++)
        prefix_sum[i]=prefix_sum[i-1]^a[i];
   while(q--){
    int l,r;
    cin>>l>>r;
    int sum=0;
    sum=prefix_sum[r]^ prefix_sum[l-1];
    cout<<sum<<'\n';
   }
   return 0;
}
