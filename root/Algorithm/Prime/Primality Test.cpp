/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

bool Primality_Test(int a){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    
    return true;
}
