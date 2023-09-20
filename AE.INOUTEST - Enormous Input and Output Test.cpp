//https://www.spoj.com/problems/INOUTEST/en/
#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        int a,b; cin>>a>>b;
        cout<<a*b<<'\n';
    }
    return 0;
}
