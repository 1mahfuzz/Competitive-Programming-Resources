/**
 *  author: mahfuzz
 *  created: 24.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
typedef long long ll;

int binExp(int a, int b){
    if(b == 0)
        return 1;
    
    int ret = binExp(a, b/2);
    ret *= ret;
    
    if(b % 2 == 1) ret *= a;
    
    return ret;
        
}


int divSum(int n){
    
    int sum = 1;
    
    for(int i = 2; i * i <= n; i++){
        int d = 0;
        
        while(n % i == 0){
            n /= i;
            d++;
        }
        if(d > 0){
            int up = binExp(i, d+1) - 1;
            sum *= up / (i -1);
        }
    }
    
    if(n > 1){
        sum *= ((n * n) - 1) / (n-1);
    }
    return sum;
}


int main(){

    
    int x; 
    while(cin >> x && x != 0){
        cout << divSum(x) << "\n";
    }
    
    return 0;
}
