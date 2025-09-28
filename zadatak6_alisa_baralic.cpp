/*
Napisati implementaciju funkcije koja ima sljedeci potpis: int max(vector<int>brojevi)
Funkcija pronalazi najveci broj unutar vektora koji je proslijedjen kao parametar.
Napisati i main program koji demonstrira koristenje navedene funkcije.
*/

#include <iostream>
#include <vector>

int max(std::vector<int> brojevi){
    int najveci=brojevi.at(0);
    for(int i=1;i<brojevi.size();i++){
        if(brojevi.at(i)>najveci){
            najveci=brojevi.at(i);
        }
    }   
    return najveci;
}

int main(){
    int n;
    std::cout<<"Unesite broj elemenata: ";
    std::cin>>n;
    std::vector<int>brojevi(n);
    for(int i=0;i<n;i++){
        std::cout<<"Unesite "<<i+1<<". element: ";
        std::cin>>brojevi.at(i);
    }
    std::cout<<"Najveci broj u vektoru je "<<max(brojevi);

}