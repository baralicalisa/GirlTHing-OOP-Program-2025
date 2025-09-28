/*
Napisati implementaciju funkcije koja ima sljedeci popis: vector<int> parni(vector<int> brojevi)
Funkcija pronalazi parne brojeve u vektoru koji je proslijedjen kao parametar.
Napisati i main program koji demonstrira koristenje navedene funkcije.
*/

#include <iostream>
#include <vector>

std::vector<int> parni (std::vector<int> brojevi){
    std::vector<int> rezultat;
    for(int i=0;i<brojevi.size();i++){
        if(brojevi.at(i)%2==0){
            rezultat.push_back(brojevi.at(i));
        }
    }
    return rezultat;
}

int main(){
    int n;
    std::cout<<"Unesite broj elemenata: ";
    std::cin>>n;
    std::vector<int> brojevi(n);
    for(int i=0;i<n;i++){
        std::cout<<"Unesite "<<i+1<<". element: ";
        std::cin>>brojevi.at(i);
    }
    std::vector<int>rezultat=parni(brojevi);
    if(rezultat.size()==0){
        std::cout<<"Nema pranih brojeva u vektoru."<<std::endl;
        return 0;
    }
    std::cout<<"Parni brojevi u vektoru su: ";
    for(int i=0;i<rezultat.size();i++){
        std::cout<<rezultat.at(i)<<" ";
    }
    std::cout<<std::endl;
    return 0;
}