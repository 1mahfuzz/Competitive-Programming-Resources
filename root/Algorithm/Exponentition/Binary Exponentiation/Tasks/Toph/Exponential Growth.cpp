/**
 *  author: mahfuzz
 *  created: 22.09.2019
**/
//Exponential Growth
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;

ll binExp(ll x, ll n){    

    if(n == 0)
        return 1;
    ll res = binExp(x, n/2);
    res = (res * res ) % mod;

    if(n % 2 == 1) res = (res * x) % mod;

    return res;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int x, n; cin >> x >> n;
    
    cout << binExp(x, n) << "\n";
    
    return 0;
}
