/**
 *  author: mahfuzz
 *  created: 25.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int modularInverseSlow(int a, int mod){
    for(int i = 1; i < mod; i++){
        if((a * i) % mod == 1)
            return i;
    }

    return 0;
}

int modularInverseFast(int a, int mod){
    return BinaryExponentiation(a, m-2);
}


int main(int argc, char* argv[]){
    
    
    
    
    return 0;
}
