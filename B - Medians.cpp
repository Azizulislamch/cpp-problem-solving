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
    int n, k; cin>>n>>k;
    if(k>(n+1)/2){
        cout<<-1<<endl;
        return;
    }
    int m=2*(k-1)+1;
    if(m>n){
        cout<<-1<<endl;
        return;
    }
    cout<<m<<endl;
    vector<int> positions(m);
    for(int i=0; i<m; i++){
        positions[i]=i+1;
    }
    for(int i=0; i<m; i++){
        cout<<positions[i]<<(i==m-1?'\n':' ');
    }
}

int main(){
    fio();
    TC solve();
    return 0;
}