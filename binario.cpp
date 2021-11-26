#include<iostream>
#include<string>

using namespace std;

void binario(int);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Introduce un numero" << endl;
    cin >> n;
    binario(n);
    
    return 0;
}

void binario(int n){
    if(n > 1){
        binario(n / 2);
    }

    cout << n%2;
}