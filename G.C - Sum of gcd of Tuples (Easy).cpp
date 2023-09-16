//G. https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // clock_t st=clock();
    int gcd=0;
    int t;cin>>t;
    for(int i=1;i<=t; i++){
        for(int j=1;j<=t;j++){
            for(int k=1;k<=t;k++){
               gcd=__gcd(__gcd(i,j),k)+gcd;
            }
        }
    }
    cout<<gcd<<'\n';
//    clock_t ed=clock();
//    cout<<(ed-st)/CLOCKS_PER_SEC<<endl;
    return 0;

}
