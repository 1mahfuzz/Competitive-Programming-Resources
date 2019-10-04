/**
 *  author: mahfuzz
 *  created: 24.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int divCount(int n){
    
    int divCnt = 1;
    
    for(int i = 2; i * i <= n; i++){
        int d = 0;
        
        while(n % i == 0){
            n /= i;
            d++;
        }
        if(d > 0) {
            divCnt *= d + 1;
        }
    }
    
    if(n > 1)
        divCnt *= 2;
    
    return divCnt;
}


int main(){
    
    divCount(1000005);
    
    int x; 
    while(cin >> x && x != 0){
        cout << divCount(x) << "\n";
    }
    
    return 0;
}
