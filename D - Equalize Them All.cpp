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
    vector<ll> a(n);
    unordered_map<ll, int> freq;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }
 
    ll t=a[0];
    int max_freq=freq[t];
 
    for(const auto& pair:freq){
        if(pair.second>max_freq){
            t=pair.first;
            max_freq=pair.second;
        }
    }
 
    vector<tuple<int, int, int>> op;
    for(int i=0; i<n; i++){
        if(a[i]==t){
            for(int j=i-1; j>=0; j--){
                if(a[j]!=t){
                    if(a[j]<t){
                        op.push_back(make_tuple(1, j+1, j+2));
                    }
                    else{
                        op.push_back(make_tuple(2, j+1, j+2));
                    }
                    a[j]=t;
                }
            }
            break;
        }
    }
 
    for(int i=0; i<n; i++){
        if(a[i]==t){
            for(int j=i+1; j<n; j++){
                if(a[j]!=t){
                    if(a[j]<t){
                        op.push_back(make_tuple(1, j+1, j));
                    }
                    else{
                        op.push_back(make_tuple(2, j+1, j));
                    }
                    a[j]=t;
                }
            }
            break;
        }
    }
 
    cout<<op.size()<<endl;
    for(const auto& pp: op){
        int q, i, j;
        tie(q, i, j)=pp;
        cout<<q<<" "<<i<<" "<<j<<endl;
    }
}

int main(){
    fio();
    solve();
    return 0;
}