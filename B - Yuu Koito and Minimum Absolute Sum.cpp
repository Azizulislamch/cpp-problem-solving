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
    vector<int> a(n);
    for(auto& x:a) cin>>x;
 
    int x=a[0], y=a[n-1];
    if(x==-1 && y==-1){
        cout<<0<<endl;
        for(int i=0; i<n; i++){
            if(a[i]==-1) cout<<0<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(x==-1 && y!=-1){
        cout<<0<<endl;
        cout<<y<<" ";
        for(int i=1; i<n; i++){
            if(a[i]==-1) cout<<0<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(x!=-1 && y==-1){
        cout<<0<<endl;
        for(int i=0; i<n-1; i++){
            if(a[i]==-1) cout<<0<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<x<<endl;
    }
    else{
        cout<<abs(a[n-1]-a[0])<<endl;
        for(int i=0; i<n; i++){
            if(a[i]==-1) cout<<0<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
 
int main(){
    fio();
    TC solve();
    return 0;
}