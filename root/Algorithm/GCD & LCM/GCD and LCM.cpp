/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    
    return gcd(b, a%b);
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    
    int t; cin >> t;
    
    while(t--){
        ll x, y; cin >> x >> y;
        
        
        ll m = min(x,y);
        ll mx = max(x, y);
        
        cout << gcd(m, mx)<< " " << (x*y)/gcd(m,mx) << "\n";
    }
    
    return 0;
}
