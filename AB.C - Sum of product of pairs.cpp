//https://atcoder.jp/contests/abc177/tasks/abc177_c?lang=en
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
   // clock_t st=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int  n;cin>>n;
    ll a[n],sum=0,ans=0;
   for(ll i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++){
            ans=(ans+a[i]*sum)%mod;
            sum=(sum+a[i])%mod;
        }

//   for(ll i=1;i<=n;i++){
//    for(ll j=i+1;j<=n;j++){
//        sum=(sum%mod)+(((a[i]%mod)*(a[j]%mod))%mod);
         //cout<<sum<<endl;
//            }
//        }
   cout<<ans%mod<<'\n';
//     clock_t ed=clock();
//     cout<<(ed-st)/CLOCKS_PER_SEC<<endl;

}
