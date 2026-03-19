#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) x | (1LL << i);
#define clearBit(x, i) x & (~(1LL << i));
#define checkBit(x, i) x & (1LL << i);
 
 
void solve(){
    ll k, x; cin>>k>>x;
    ll d=k*(k+1)/2;
    if(k*k<=x){
        cout<<2*k-1<<endl;
        return;
    }
 
    ll ans;
    ld x1, ans1;
    if(d>x){
        x1=x;
        ans1=ceil((sqrt(8*x1+1)-1)/2);
        ans=ans1;
        cout<<ans<<endl;
    }else{
        x=x-d;
        x=k*(k-1)/2-x;
        x1=x;
        ans1=floor((sqrt(8*x1+1)-1)/2);
        ans=ans1;
        cout<<2*k-1-ans<<endl;
    }
}
 
int main(){
    fio();
    TC solve();
    return 0;
}