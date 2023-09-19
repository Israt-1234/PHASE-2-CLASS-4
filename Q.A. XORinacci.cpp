//https://codeforces.com/problemset/problem/1208/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    while(n--){
            ll a,b,c;
    cin>>a>>b>>c;
    c=c%3;
   if(c==0) cout<<a<<'\n';
    if(c==1) cout<<b<<'\n';
    if(c==2) cout<<(a^b)<<'\n';
    }
 return 0;
}
/*
f(0) = a
f(1) = b
f(2) = f(1) ^ f(0) = b ^ a
f(3) = f(2) ^ f(1) = (b ^ a) ^ b = a
f(4) = f(3) ⊕ f(2) = a ⊕ (b ⊕ a) = b
f(5) = f(4) ⊕ f(3) = b ⊕ a
f(6) = f(5) ⊕ f(4) = (b ⊕ a) ⊕ b = a
In the XORinacci sequence, the value of each term depends on the two previous terms
*/
