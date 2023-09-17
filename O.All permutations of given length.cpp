//O. https://www.eolymp.com/en/problems/4815
#include<bits/stdc++.h>
using namespace std;
const int N=12;
int s[N];
int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
   int n; cin>>n;
   for(int i=1;i<=n;i++){
    s[i]=i;
   }
//   int len=s.size();
   do{
    for(int i=1;i<=n;i++)
        cout<<s[i];
        cout<<'\n';
   }
   while(next_permutation(s+1,s+n+1));
 return 0;
}
