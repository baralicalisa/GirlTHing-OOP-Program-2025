/*
Napisi program u C++ jeziku koji trazi od korisnika da unese neki tekst (string), a zatim:
1. Prebroji koliko puta se pojavljuje slovo 'a' (ili 'A').
2. Ispisuje string unazad
*/

#include <iostream>

int main(){
    std::string tekst;
    std::cout<<"Unesite tekst: ";
    std::getline(std::cin, tekst);

    char a='a', A='A';
    int n=tekst.length(), brojac=0;

    for(int i=0;i<n;i++){
        if(tekst.at(i)==a || tekst.at(i)==A){
            brojac++;
        }
    }

    std::cout<<std::endl<<"Slovo 'a' ili 'A' se pojavljuje "<<brojac<<" puta.";
    std::cout<<std::endl<<"String ispisan unazad: ";
    for(int i=n-1;i>=0;i--){
        std::cout<<tekst.at(i);
    }
}