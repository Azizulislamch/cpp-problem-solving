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
    int n;
    cin>>n;
    int a1=0, a2=0, a3=0;
    if(3<=n && n<=28){
        a1+=1;
        a2+=1;
        a3+=n-2;
    }
    if(29<=n && n<=53){
        a3+=26;
        a1+=1;
        a2+=n-27;
    }
    if(54<=n && n<=78){
        a3+=26;
        a2+=26;
        a1+=n-52;
    }
    cout<<char(a1+96)<<char(a2+96)<<char(a3+96)<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}