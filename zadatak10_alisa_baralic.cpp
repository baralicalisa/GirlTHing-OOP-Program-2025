/*
Napisati funkciju 'int brojCifara(int n)' koja vraca broj cifara u proslijedjenom broju.
*/

#include <iostream>

int brojCifara(int n){
    int brojac=0;
    if(n<0){
        n*=-1;
    }
    while(n>0){
        n/=10;
        brojac++;
    }
    return brojac;
}

int main() {
    int broj;
    std::cout<<"Unesite broj: ";
    std::cin>>broj;
    
    std::cout<<"Broj "<<broj<<" ima "<<brojCifara(broj)<<" cifara."<<std::endl;
   
    return 0;   
}