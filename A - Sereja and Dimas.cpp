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
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int s1=0, s2=0;
    int r=n-1;
    int l=0;
    for(int i=0; i<n; i++){
        if(a[r]>a[l]){
            if(i%2==0){
                s1+=a[r];
                r--;
            }
            else{
                s2+=a[r];
                r--;
            }
        }else{
            if(i%2==0){
                s1+=a[l];
                l++;
            }
            else{
                s2+=a[l];
                l++;
            }
        }
    }
    cout<<s1<<" "<<s2<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}