/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

const long long mod = 1000000007;
typedef long long ll;

//return a big integer s modulo a
//Complexity O(|s|)
ll BigMod(string s, ll mod){
    ll curr = 0;
    
    for(int i = 0; i < s.size(); i++){
        int digit = s[i] - '0';
        curr = ((curr * 10) % mod + digit) % mod;
    }
    
    return curr;
        
}
