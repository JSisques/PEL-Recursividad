#include<iostream>
#include<string>

using namespace std;

int palindromo(string, int, int);

int main(int argc, char const *argv[])
{
    string n;
    cout << "Introduce un numero" << endl;
    getline(cin,n);
    cout << palindromo(n, 0, n.length()-1);
    
    return 0;
}

int palindromo(string n , int comienzo, int final){
    if(comienzo >= final){
        return 1;
    }

    if(n[comienzo] != n[final]){
        return 0;
    } else{
        return palindromo(n, ++comienzo, --final);
    }
}