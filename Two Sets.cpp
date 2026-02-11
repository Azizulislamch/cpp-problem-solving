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
#define debug(x) cerr << x << endl;
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))

void solve(){
    ll n; cin>>n;
    ll total=n*(n+1)/2;
    
    if(total%2) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        total/=2;
        vector<ll> a, b;
        for(ll i=n; i>=1; i--){
            if(total-i>=0){
                a.push_back(i);
                total-=i;
            }else{
                b.push_back(i);
            }
        }
        cout<<a.size()<<endl;
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
        
        cout<<b.size()<<endl;
        for(auto x:b) cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    fio();
    solve();
    return 0;
}