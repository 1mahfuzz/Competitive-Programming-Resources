/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

const long long mod = 1000000007;
typedef long long ll;

//not using mod
//Complexity O(log_2 n)
ll BinaryExponentiation(ll a, ll n){
    if(n == 0)
        return 1;
    
    ll res = BinaryExponentiation(a, n/2);
    res *= res;
    
    if(n % 2 == 1)
        return res *= a;
    
    return res;
}

//using mod
ll BinaryExponentiation(ll a, ll n, ll mod){
    if(n == 0)
        return 1;
    
    ll res = BinaryExponentiation(a, n/2);
    res *= res % mod;
    
    if(n % 2 == 1)
        return res *= a % mod;
    
    return res;
}
