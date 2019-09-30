/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

int gcd(int a, int b){
    if(b == 0)
        return a;
        
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a*b) / gcd(a, b);    
}
