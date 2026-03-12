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
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
 
    int cnt=0, idx=-1;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            cnt++;
            idx=i+1;
        }
    }
 
    if(cnt%2==0) cout<<"Tie"<<endl;
    else{
        if(idx & 1) cout<<"Ajisai"<<endl;
        else cout<<"Mai"<<endl;
    }
}
 
int main(){
    fio();
    TC solve();
    return 0;
}