//https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long x,y; cin>>x>>y;
    int count=0;
    while(x<=y){
        count++;
        x=x*2;
    }
  cout<<count<<'\n';
 return 0;
}
