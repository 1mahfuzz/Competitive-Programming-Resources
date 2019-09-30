/**
 *  author: mahfuzz
 *  created: 25.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
const int MAXN = 1000005;
typedef long long ll;

ll fact[MAXN];
ll invFact[MAX_N];

ll binExp(ll a, ll m){
    if(m == 0)
        return 1;
        
    ll ret = binExp(a, m/2);
    
    ret *= ret;
    
    if(m % 2 == 0) ret *= a;
    return ret;
}


void getFact(){
    fact[0] = invFact[0] = 1;
    
    for(ll i = 1; i <= MAXN; i++){
        fact[i] = (fact[i-1] * i) % MOD;
        invFact[i] = binExp(invFact[i-1], MOD-2);
    }
    
}

ll nCr(ll n, ll r){
        
    ll up = fact[n];
    ll down1 = invFact[r];
    ll donw2 = invFact[n-r]; 
    
    ll ans = up * down1 * down2;
    
    return ans;
    
}


int main(int argc, char* argv[]){
    
    
    return 0;
}
