/*
Napisati program koji ima unaprijed zadani tajni broj (neka to u nasem zadatku bude broj 7).
Program trazi od korisnika da unosi brojeve sve dok ne pogodi tajni broj.
Kada korisnik unese broj koji nije tajni ispisati odgovarajucu poruku.
Poruku je potrebno ispisati i kada korisnik pogodi tajni broj, ali tada program zavrsava.
Ovaj zadatak je potrebno implementirati koristenjem while petlje.
*/

#include <iostream>

int main(){
    int tajni_broj=7, uneseni;
    std::cout<<"Pogodite tajni broj: ";
    std::cin>>uneseni;

    while(uneseni!=tajni_broj){
        std::cout<<"Niste pogodili tajni broj. Pokusajte ponovo!"<<std::endl;
        std::cout<<"Pogodite tajni broj: ";
        std::cin>>uneseni;
    }

    std::cout<<"Cestitamo, pogodili ste tajni broj!"<<std::endl;
    return 0;
}