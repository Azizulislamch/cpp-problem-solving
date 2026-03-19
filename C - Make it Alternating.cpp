#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned long long
#define pb push_back
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define setBit(x, i) ((x) or (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
 
void solve(){
    string s; cin>>s;
    vector<int> v;
    ll cnt=1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]) cnt++;
        else{
            v.pb(cnt);
            cnt=1;
        }
    }
    v.pb(cnt);
 
    ll op=s.size(), ans=1;
    for(int i=0; i<v.size(); i++){
        ans=(ans*v[i])%MOD;
        op--;
    }
 
    for(ll i= 1; i<=op; i++){
        ans=(ans*i)%MOD;
    }
    cout<<op<<" "<<ans<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}