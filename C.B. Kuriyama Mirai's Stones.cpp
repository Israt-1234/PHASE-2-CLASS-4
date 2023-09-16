//https://codeforces.com/problemset/problem/433/B
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
int a[N],b[N];
long long prefix_sum_a[N], prefix_sum_b[N];
int main()
{
     //clock_t st=clock();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    int a[n+2],b[n+3];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];

    }
       sort(b+1,b+n+1);
    prefix_sum_a[0]=0;
    for(int i=1;i<=n;i++)
      prefix_sum_a[i]=prefix_sum_a[i-1]+a[i];


         prefix_sum_b[0]=0;
    for(int i=1;i<=n;i++)
      prefix_sum_b[i]=prefix_sum_b[i-1]+b[i];

    int t; cin>>t;
    while(t--){
            long long sum=0;
        int type,l,r;
        cin>>type>>l>>r;

        if(type==1)
           sum=prefix_sum_a[r]-prefix_sum_a[l-1];
        else
              sum=prefix_sum_b[r]-prefix_sum_b[l-1];

        cout<<sum<<'\n';
    }
//     clock_t ed=clock();
//     cout<<(ed-st)/CLOCKS_PER_SEC<<'\n';    //1s
   return 0;
}
