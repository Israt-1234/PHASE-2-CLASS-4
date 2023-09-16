//CSUMQ - Cumulative Sum Query--------------------------
//prefix
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
int prefix_sum[N];
int a[N];
int main()
{
    int n;
    cin>>n;
//    int a[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];
        prefix_sum[0]=0;
        for(int i=1;i<=n;i++){       //o(n)
            prefix_sum[i]=prefix_sum[i-1]+a[i];

        }

    int q; cin>>q;
    while(q--){           //o(q)
        int l,r;
        int sum=0;
        cin>>l>>r;
        l++; r++;
//        for(int i=l;i<=r;i++)
//            sum=sum+a[i];
          sum=prefix_sum[r]-prefix_sum[l-1];
            cout<<sum<<endl;
    }

}
*/
//100s
//O(n+q)==0.002s

//suffix sum
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
int suffix_sum[N];
int a[N];
int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    suffix_sum[n+1]=0;
    for(int i=n;i>=1;i-- )
        suffix_sum[i]=suffix_sum[i+1]+a[i];

    int q; cin>>q;
    while(q--){
            int sum=0;
        int l,r; cin>>l>>r;
        l++;r++;
       sum=suffix_sum[l]-suffix_sum[r+1];
       cout<<sum<<endl;
    }
}
*/
//CSES Problem Set----------------------------------------
//Range Xor Queries //https://cses.fi/logout
// using prefix;
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+7;
ll pre_xor[N];
ll a[N];
int main()
{
   ll n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++)
        cin>>a[i];
  pre_xor[0]=0;
   for(int i=1;i<=n;i++)
   pre_xor[i]=pre_xor[i-1]^a[i];
    ll xor_sum=0;
    while(q--){
        ll l,r;
        cin>>l>>r;
        xor_sum=pre_xor[r]^pre_xor[l-1];
        cout<<xor_sum<<endl;

    }
    cout<<endl;
}
*/

//A. Way Too Long Words-----------------------------------
//codeforces
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        string s;
        cin>>s;
        int l=s.size();
        if(l<=10)
            cout<<s<<endl;
        else
        {

          cout<<s[0]<<l-2<<s[l-1]  <<endl;
        }
    }
    return 0;
}

*/
//helpful math------------------------------
//codeforces
/*
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

*/

//a.coins-------------------------------
//codeforces
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int ans=0;
    while(sum>=n){
     ans++;             //ans=sum/n;
     sum-=n;            // if(sum%n>=1)
    }                   // ans++; cout<<ans;
    if(sum>=1){           //or sum+n-1/n
        ans++;              //or(ceil((double)sum/n))
    }
   cout<<ans<<endl;
}
*/

//A.Special Permutation------------------------------
//codeforces
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        cout<<t<<" ";
        for(int i=1;i<t;i++)
            cout<<i<<" ";
            cout<<endl;
    }
return 0;
}
*/
//EhAb AnD gCd--------------------------------------
//codeforce
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    cout<<1<<" "<<n-1<<endl;
}
*/

//Just Fix It!--one number in fixed--and total sum---------
//1<=i,j<=n for all pair ai*aj
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int total_sum=0;
    for(int i=1;i<=n; i++)
        total_sum+=a[i];
        //int sum=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        sum=0;             //fix=i
//        for(int j=1;j<=n;j++){
//             sum+=a[i]*a[j];     // cout<<sum<<endl;
//        }
          sum=a[i]*total_sum;
    ans+=sum;
    }
    cout<<ans;
}
*/
//Given an array of  sum ai*aj for all 1<=i<j<=n
// solve in prefix _ sum or suffix _ sum--------------
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int a[n+1];
    int suffix_sum[n+2];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    suffix_sum[n+1]=0;
    for(int i=n;i>=1;i--)
        suffix_sum[i]=suffix_sum[i+1]+a[i];
    int ans=0;
    for(int i=1;i<=n;i++){
            int sum=0;
//    for(int j=i+1;j<=n;j++)
//        sum+=a[i]*a[j];
        sum=a[i]*suffix_sum[i+1];   //1 3 4
        ans+=sum;                   //(1*3)+(3*4)+(4*0)
    }
    cout<<ans<<endl;
    return 0;

}
*/

//maximum element in edge-------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mx=-1e5;   //mx=0;
    for(int i=0;i<n;i++)
        mx=max(mx,a[i]);
    cout<<mx<<endl;
    return 0;
}
*/
//count digit----------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;cin>>n; int digit=0;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    while(n>0){
        digit++;
        n=n/10;
    }
cout<<digit<<endl;
}
*/

//permutation
//next-permutation builting function---------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int a[]={1,2,3};
    next_permutation(a,a+n);
    for(int i=0;i<n;i++)          //ans=1 3 2 //legicograpy next permutation
        cout<<a[i]<<" ";
}
*/
//prev-permutation builting function-----------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int a[]={1,3,2};
    prev_permutation(a,a+n);
    for(int i=0;i<n;i++)          //ans=1 2 3 //legicograpy next permutation
        cout<<a[i]<<" ";
}
*/

//all possible permutation print next-permutation builting function
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int a[]={1,2,3};
    while(1){
    bool paici =next_permutation(a,a+n);
    if(!paici) break;
    for(int i=0;i<n;i++)          // 1 3 2
        cout<<a[i]<<" ";          // 2 1 3
         cout<<endl;              //2 3 1
                                  //3 1 2
          }                       //3 2 1
}

*/
//do while with input print--------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int a[]={1,2,3};
    //sort(a,a+n);               //when number is unsorted but if they say all possible are prent then i was sortedd in array
    do{                          //lexicograpycally
       for(int i=0;i<n;i++)        //1 2 3
        cout<<a[i]<<" ";           //1 3 2
        cout<<endl;                // 2 1 3
    }                              //2 3 1
  while(next_permutation(a,a+n));  //3 1 2
}                                  //3 2 1
*/

//swap another way fun-------------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=2, y=4;
   // swap(x,y);
   // using addition and subtraction
//   x=x+y;  //3    x = (real_x + real_y)
//   y=x-y;  //1    y = (real_x + real_y) - real_y = real_x
//   x=x-y;  //2    x = (real_x + real_y) - real_x = real_y
//   cout<<x<<' '<<y<<endl;
    // using XOR
     x=x^y;
     y=x^y;
     x=x^y;
    cout<<x<<' '<<y<<endl;
  //multiplication and division.
//   x=x*y;
//   y=x/y;
//   x=x/y;
//    cout<<x<<' '<<y<<endl;
}


*/

//setprecision:::------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num=103.1412443;
    cout<<setprecision(3)<<num<<endl;
    cout<<setprecision(4)<<num<<endl;
    cout<<setprecision(8)<<num<<endl;
    //different
    cout<<fixed<<setprecision(3)<<num<<endl;
    cout<<fixed<<setprecision(4)<<num<<endl;
    cout<<fixed<<setprecision(8)<<num<<endl;
}
*/

//Fast I/0--------------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); // unties cin from cout, so it will not flush cout before taking input from cin, so output will be shown after taking all inputs
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    cout << "x = " << x << '\n';
  }
  return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); // unties cin from cout, so it will not flush cout before taking input from cin, so output will be shown after taking all inputs
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    cout << "x = " << x << endl;
  }
  return 0;
}
*/
/*
// time test-------------------------
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout<<CLOCKS_PER_SEC<<'\n';
}
*/

//Program Duration-----------------------
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    clock_t st=clock();
    int n=10000000;
    long long sum=0;
    for(int i=1;i<=n;i++)
        sum+=1LL*i*(n-i+1);
    cout<<sum<<'\n';
    clock_t en =clock();
    cout<<1.0*(en-st)/CLOCKS_PER_SEC<<'\n';
    return 0;
}
*/
//memset and fill my work----------------

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[]="bbbbbbbbbs";
    memset(s,'a',6);      //replace by a in 1st six character
    cout<<s<<'\n';

    char n[10];
    memset(n,'a',10);
    n[9]='\0';
    cout<<s<<'\n';

    int a[10];
    memset(a,-1, sizeof(a))   //memset work in 0 ans -1 cz other number in byte byte implement
    for(int i=0;i<10;i++)
        cout<<a[i]<<' ';


      int n=10; int a[n];        //my idea done:
      int x=29;                //255 bit work in -1 or last 8 bit are 1
    memset(a,x, sizeof(a));
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
        cout<<'\n';
        cout<<"x= "<<bitset<32>(x)<<'\n';
        for(int i=0;i<n;i++)
            cout<<bitset<32>(a[i])<<'\n';

        fill use
    int n=10; int a[n];
      int x=10;             //same value print
  fill(a,a+10,x);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
        cout<<'\n';
        cout<<"x= "<<bitset<32>(x)<<'\n';
        for(int i=0;i<n;i++)
            cout<<bitset<32>(a[i])<<'\n';

        return 0;
}

*/
//memset:::::::::::::::::::::::::::::;
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  char str[10];
  memset(str, 'a', 5); // assign 'a' to first 5 bytes of str, as char is 1 byte, so first 5 elements of str will be 'a'
  str[5] = '\0'; // null character
  cout << str << '\n'; // str = aaaaa
  memset(str, 'a', sizeof(str)); // assign 'a' to all bytes of str (10 bytes)
  str[9] = '\0'; // we need to put null character at the end
  cout << str << '\n'; // str = aaaaaaaaa

  int n = 10;
  int a[n];
  int x = 29;
  memset(a, x, sizeof(a));
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all 488447261
  }
  cout << '\n';
  cout << bitset<32>(x) << "\n\n"; // ...00011101
  for (int i = 0; i < n; i++) {
    cout << (bitset<32>(a[i])) << '\n'; // 00011101 00011101 00011101 00011101
  }

  memset(a, 0, sizeof a); // 0 = 00000000 00000000 00000000 00000000
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all 0s
  }
  cout << '\n';

  memset(a, -1, sizeof a); // -1 = 11111111 11111111 11111111 11111111
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all -1s
  }
  cout << '\n';
  return 0;
}
*/

//fill--------------------------
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10];
  fill(a, a + 10, 5); // assign 5 to all elements of a
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' '; // all 5s
  }
  cout << '\n';
  return 0;
}
*/

//assert
// when all the value is then code is run other wise assrt falid;
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    assert(x==9);   //if i was writeen x=10 then its true but i was writeen in x=9 ,so answer is  asserted failed
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int divide(int a, int b) {
  assert(b != 0); // If b is 0, then the program will terminate with a runtime error
  return a / b;
}

int main() {
  int n;
  cin >> n;
  assert(n >= 1 && n <= 100); // If n is not in the range [1, 100], then the program will terminate with a runtime error
  cout << n << '\n';
   cout<<"divide ans : "<<'\n';

  cout << divide(10, 2) << '\n';
  cout << divide(10, 0) << '\n'; // This will give a runtime error
  return 0;
}

















