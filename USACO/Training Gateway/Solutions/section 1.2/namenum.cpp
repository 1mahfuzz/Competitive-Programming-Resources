/*
ID: likhon.1
PROG: namenum
LANG: C++
*/

#include<iostream>
#include<fstream>
using namespace std;

int alpha[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

string get_int(string x){
    string temp = "";
    for(int i = 0; x[i]; i++)
        temp += char(alpha[x[i] - 'A'] + '0');

    return temp;
}

int main(){
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);

    ifstream fin("dict.txt");

    int flag = 0;
    string num, text; cin >> num;
    while(fin >> text){
        if(get_int(text) == num)
            cout << text << "\n", flag = 1;
    }

    if(!flag)
        cout << "NONE\n";

    
    return 0;
}
