#include<iostream>
#include<string>

using namespace std;

int factorial(int);

int main(int argc, char const *argv[])
{
    int n = factorial(10);

    cout << n;
    
    return 0;
}

int factorial(int n){
    if (n < 0){
        return 0;
    } else if(n > 1){
        return n * factorial(n-1);
    } else{
        return 1;
    }
}