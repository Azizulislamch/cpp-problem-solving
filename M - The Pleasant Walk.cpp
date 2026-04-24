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
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &x : v)
        cin >> x;
    int max=0;
    int count=0;
    for (int i=0; i<n-1; i++){
 
        if(v[i]!=v[i + 1]){
            count++;
            if (count>max){
                max=count;
            }
        }
        else count=0;
    }
 
    cout<<max+1<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}