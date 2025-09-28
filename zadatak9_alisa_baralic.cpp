/*
Napisati funkciju naziva daLiJeParan koja provjerava da li je broj paran.
Ukoliko jeste paran, funkcija vraca true, a ukoliko nije vraca false.
*/

#include <iostream>

bool daLiJeParan(int n){
    if(n%2==0) return true;
    else return false;
}

int main() {
    int broj;
    std::cout<<"Unesite broj: ";
    std::cin>>broj;
    
    if(daLiJeParan(broj)){
        std::cout<<"Broj "<<broj<<" je paran."<<std::endl;
    }
    else{
        std::cout<<"Broj "<<broj<<" nije paran."<<std::endl;
    }
    
    return 0;
}