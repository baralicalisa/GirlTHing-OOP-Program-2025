/*
Napisati funkciju koja vraca najveci od tri broja.
Funkcija treba da ima sljedeci popis: int najveci(int a, int b, int c)
*/

#include <iostream>

int najveci(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

int main() {
    int a,b,c;
    std::cout<<"Unesite prvi broj: ";
    std::cin>>a;
    std::cout<<"Unesite drugi broj: ";
    std::cin>>b;
    std::cout<<"Unesite treci broj: ";
    std::cin>>c;
    
    std::cout<<"Najveci broj je "<<najveci(a,b,c)<<std::endl;
    
    return 0;
}