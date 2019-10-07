#include<bits/stdc++.h>
using namespace std;
typedef vector<long long> vi;
const long long mod = 1000000007;
typedef long long ll;
vi mul(vi A, vi B){
    vi W;
    if(B.size() == 2){
        ll a = ((A[0] * B[0]) % mod + (A[1] * B[1]) % mod) % mod;
        ll b = ((A[2] * B[0]) % mod + (A[3] * B[1]) % mod) % mod;
        W.push_back(a);
        W.push_back(b);
        return W;
    }
    ll a = ((A[0] * B[0]) % mod + (A[1] * B[2]) % mod) % mod;
    ll b = ((A[0] * B[1]) % mod + (A[1] * B[3]) % mod) % mod;
    ll c = ((A[2] * B[0]) % mod + (A[3] * B[2]) % mod) % mod;
    ll d = ((A[2] * B[1]) % mod + (A[3] * B[3]) % mod) % mod;
    
    W.push_back(a);
    W.push_back(b);
    W.push_back(c);
    W.push_back(d);
    
    return W;
}

vi exp(vi A, ll n){o
    if(n == 1)
        return A;
    if(n % 2 == 0){
        return exp(mul(A, A), n / 2);
    }else{
        return mul(A, exp(mul(A, A), n / 2));
    }
}

int main(){
    
    vi A{1, 1, 1, 0};
    vi V{1, 0};
    
    ll n; cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        return 0;
    }
    vi res = mul(exp(A, n-1), V);
    cout << res[0] % mod << "\n";
    
    return 0;
}
