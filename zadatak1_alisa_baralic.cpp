/*
Napisati program u C++ koji trazi od korisnika da unese brojacnu ocjenu (od 0 do 100), 
a zatim ispisuje odgovarajucu slovnu ocjenu prema sljedecim pravilima
0-59:F, 60-69: D, 70-79: C, 80-89: B, 90-100:A
Takodjer je potrebno ispisati poruku o greski ukoliko korisnik unese broj koji je van granica.
*/

#include <iostream>

int main()
{
    int ocjena;
    std::cout<<"Unesite brojcanu ocjenu: ";
    std::cin>>ocjena;

    if(ocjena>=90 && ocjena<=100)
        std::cout<<"A"<<std::endl;

    else if(ocjena>=80 && ocjena<=89)
        std::cout<<"B"<<std::endl;

    else if(ocjena>=70 && ocjena<=79)
        std::cout<<"C"<<std::endl;

    else if(ocjena>=60 && ocjena<=69)
        std::cout<<"D"<<std::endl;

    else if(ocjena>=0 && ocjena<=59)
        std::cout<<"F"<<std::endl;

    else
        std::cout<<"Greska: Unesena ocjena je van granica!"<<std::endl;


    return 0;
}
