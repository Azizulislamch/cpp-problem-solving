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


map<int,int> a;
map<int,int> b;
 
int sod(int n){
    if (a.find(n) != a.end()) {
        return a[n];
    }
    int n2=n;
    int sum=0;
    while(n){
        sum += n%10;
        n/=10;
    }
    a[n2]=sum;
    return sum;
}
 
void pre_calculate(int n) {
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum+=sod(i);
        b[i]=sum;
    }
}
 
int main(){
    pre_calculate(2*(int)1e5);
    int t; cin >> t;
    while(t--){
        int n;
        cin>>n;
        cout<<b[n]<<endl;
    }
    return 0;
}