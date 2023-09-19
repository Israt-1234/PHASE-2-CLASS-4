//https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;
const int n=101;
char s[n];
int digit[n];
int main()
{
//    string s;
    cin>>s;
    int l=strlen(s);
    int digit_id=0;
    for(int i=0;i<l;i+=2){
         digit[digit_id]=s[i]-'0';
         digit_id++;
    }
//    for(int i=0;i<digit_id;i++)
//        cout<<s[i]<<" ";
sort(digit,digit+digit_id);
for(int i=0;i<digit_id;i++){
    cout<<digit[i];
    if(i<digit_id-1) cout<<"+";
}
cout<<endl;
return 0;
}
