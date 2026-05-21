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
    int n; cin>>n;
    if(n%4!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int a=n/2;
        for(int i=1; i<=a; i++){
            cout<<2*i<<" ";
        }
        for(int i=1; i<=a; i++){
            if(i<a) cout<<2*i-1<<" ";
            else cout<<3*i-1;
        }
        cout<<endl;
    }
}

int main(){
    fio();
    TC solve();
    return 0;
}