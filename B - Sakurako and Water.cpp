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
    vector<vector<int>> a(n, vector<int>(n)); // like int a[n][n]
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int k=0; k<n; k++){
        int i=0, j=k, mn=0;
        while(i<n && j<n){
            if(a[i][j]<0) mn=min(mn, a[i][j]);
            i++;
            j++;
        }
        ans+=abs(mn);
    }
    for(int k=1; k<n; k++){
        int i=k, j=0, mn=0;
        while(i<n && j<n){
            if(a[i][j]<0) mn=min(mn, a[i][j]);
            i++;
            j++;
        }
        ans+=abs(mn);
    }
    cout<<ans<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}