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
    int a[n];
    
    int one=0, two=0, three=0;
    int a1[5001], a2[5001], a3[5001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==1){
            a1[one]=i;
            one++;
        }else if(a[i]==2){
            a2[two]=i;
            two++;
        }else{
            a3[three]=i;
            three++;
        }
    }
    
    int m=min(one, min(two, three));
    if(m==0){
        cout<<"0\n";
    }else{
        cout<<m<<endl;
        for(int i=0; i<m; i++){
            cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
        }
    }
}

int main(){
    fio();
    solve();
    return 0;
}