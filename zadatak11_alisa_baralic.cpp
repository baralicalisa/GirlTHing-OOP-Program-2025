/*
Napisati program u C++ jeziku koji koristi rekurzivnu funkciju za rješavanje problema.
FIBONACCIJEV NIZ
*/

#include <iostream>

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n;
    std::cout<<"Unesite broj n: ";
    std::cin>>n;
    
    std::cout<<"Fibonaccijev niz od 0 do "<<n<<":"<<std::endl;
    
    for(int i=0;i<n;i++){
        std::cout<<fibonacci(i)<<" ";
    }

    return 0;
}