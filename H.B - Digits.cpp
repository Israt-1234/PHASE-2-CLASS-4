#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k; cin>>n>>k;
    cout<<(ceil)(log(n)/log(k))+1<<'\n';
    return 0;
}
