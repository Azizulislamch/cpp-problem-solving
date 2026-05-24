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


bool prime(int n){
    if(n==2){
        return true;
    }
    if(n%2==0 || n==1){
        return false;
    }
    for(int i=3; i<n; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
bool aPrime(int n){
    int count=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0 && prime(i)){
            count++;
        }
    }
    return count==2;
}
 
int main(){
    int tcount=0;
    int n;
    cin>>n;
 
    for(int i=1; i<=n; i++){
        if(aPrime(i)){
            tcount++;
        }
    }
    cout<<tcount<<endl;
    return 0;
}