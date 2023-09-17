#include<bits/stdc++.h>
using namespace std;
const int N=88;
char s[N];
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p; cin>>p;
    while(p--){
        int n;   cin>>n>>s;
       int  l=strlen(s);
       bool exits=next_permutation(s,s+l);
       if(exits)
        cout<<n<<" "<<s<<'\n';
       else
        cout<<n<<" "<<"BIGGEST"<<'\n';

    }
    return 0;
}
