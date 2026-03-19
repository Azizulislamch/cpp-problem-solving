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
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
 
void solve(){
    int n, k; cin>>n>>k;
 
    string s(n, 'a');
    for(int i=n-2; i>=0; i--){
        if(k<=n-i-1){
            s[i]='b';
            s[n-k]='b';
            break;
        }
        k-=n-i-1;
    }
    cout<<s<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}