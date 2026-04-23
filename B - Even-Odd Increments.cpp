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
const int mod=1e9+7;


void solve(){
    int n, q;
    cin>>n>>q;
 
    vector<ll> a(n);
    ll sum=0;
    int even=0, odd=0;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
 
    while(q--){
        int type, x;
        cin>>type>>x;
 
        if(type==0){
            sum+=even*x;
            if(x%2!=0){
                odd+=even;
                even=0;
            }
        }else{
            sum+=odd*x;
            if(x%2!=0){
                even+=odd;
                odd=0;
            }
        }
        cout<<sum<<endl;
    }
}

int main(){
    fio();
    TC solve();
    return 0;
}