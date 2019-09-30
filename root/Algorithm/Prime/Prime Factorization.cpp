/**
 *  author: mahfuzz
 *  created: 24.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
typedef long long ll;

vector<pii> prime_factors;
void primeFactorization(int n){
    for(int i = 2; i * i <= n; i++){
        int d = 0;
        while(n % i == 0){
            n /= i;
            d++;
        }
        if(d > 0)
            prime_factors.push_back({i, d});
    }
    
    if(n > 1)
        prime_factors.push_back({n, 1});
    
}


int main(){
    
    primeFactorization(10);
    
    for(auto a : prime_factors)
        cout << a.first << " " << a.second << "\n";
    
    
    return 0;
}
