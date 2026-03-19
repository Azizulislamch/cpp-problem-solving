#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 100005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
 
int CntBinDig(ll x){
    int cnt=0;
    while(x){
        cnt++;
        x=x>>1;
    }
    return cnt;
}
 
void solve(){
    ll a, b; cin>>a>>b;
    if(CntBinDig(b)>CntBinDig(a)){
        cout<<-1<<endl;
        return;
    }
 
    int k=CntBinDig(a);
    cout<<2<<endl;
 
    ll x=0;
    for(int i=k-2; i>=0; i--){
        int p=checkBit(a, i);
        int q=checkBit(b, i);
        if(p!=q) x=setBit(x, i);
    }
 
    ll y=0;
    int p=checkBit(a, k-1);
    int q=checkBit(b, k-1);
    if(p!=q) y=setBit(y, k-1);
 
    cout<<x<<" "<<y<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}