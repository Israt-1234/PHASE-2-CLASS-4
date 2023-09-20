// https://codeforces.com/problemset/problem/200/B
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    float avs,sum=0;

    for(i=0; i<n; i++)
    {
        int s;
        cin>>s;
        sum=s+sum;
    }
    avs=sum/n;
    cout<<avs<<endl;
}
