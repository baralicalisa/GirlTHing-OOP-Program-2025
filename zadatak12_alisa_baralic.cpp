/*
Napisati klasu Zaposlenik. Jedan zaposlenik treba da ima ime, prezime, adresu stanovanja, i platu.
Napisati funkciju koja ima sljedeci potpis: double prosjekPlata(vector<Zaposlenik>zaposlenici);
Funkcija treba da racuna prosjek plate svih zaposlenika. 
Kreirati i main program koji testira navedenu funkcionalnost za par Zaposlenika i ispisuje vrijednost na ekran.     
*/

#include <iostream>
#include <vector>
#include <iomanip>

class Zaposlenik{
  public:
  std::string ime;
  std::string prezime;
  std::string adresa;
  double plata;
};

double prosjekPlata(std::vector<Zaposlenik>zaposlenici){
    double suma=0;
    
    for(int i=0;i<zaposlenici.size();i++){
        suma+=zaposlenici.at(i).plata;
    }
    
    double prosjek=suma/zaposlenici.size();
    
    return prosjek;
}

int main() {
    int n;
    std::cout<<"Unesite broj zaposlenika: ";
    std::cin>>n;
    
    std::vector<Zaposlenik>zaposlenici(n);
    
    for(int i=0;i<n;i++){
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout<<std::endl<<"Unesite podatke za "<<i+1<<". zaposlenika:"<<std::endl;
        std::cout<<"Ime: ";
        std::getline(std::cin, zaposlenici.at(i).ime);
        std::cout<<"Prezime: ";
        std::getline(std::cin, zaposlenici.at(i).prezime);
        std::cout<<"Adresa stanovavanja: ";
        std::getline(std::cin, zaposlenici.at(i).adresa);
        std::cout<<"Plata: ";
        std::cin>>zaposlenici.at(i).plata;
    }
    
    std::cout<<std::endl<<"Prosječna plata iznosi: "<<std::fixed<<std::setprecision(2)<<prosjekPlata(zaposlenici)<<" KM.";
    
    return 0;
}