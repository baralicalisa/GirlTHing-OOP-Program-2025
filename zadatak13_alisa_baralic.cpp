/*
Kreirati klasu Student. Klasa Student treba da sadrzi ime, prezime, broj indeksa studenta.
Kreirati main program koji omogucava unos studenata od strane korisnika preko tastature.
Nakon zavrsetka unosa ispisati broj unesenih studenata.
*/

#include <iostream>
#include <vector>

class Student{
    public:
    std::string ime;
    std::string prezime;
    std::string indeks;
};

int main() {
    std::string unos;
    std::vector<Student>studenti;
    Student s;
    do{
        std::cout<<"Unesite podatke za "<<studenti.size()+1<<". studenta:"<<std::endl;
        std::cout<<"Ime: ";
        std::getline(std::cin, s.ime);
        std::cout<<"Prezime: ";
        std::getline(std::cin, s.prezime);
        std::cout<<"Broj indeksa: ";
        std::getline(std::cin, s.indeks);
        studenti.push_back(s);
        
        std::cout<<std::endl<<"Da li zelite dodati jos jednog studenta? (da/ne): ";
        std::getline(std::cin, unos);
        std::cout<<std::endl;
        
    }while(unos=="da" || unos=="DA" || unos=="Da" || unos=="dA");
    
    std::cout<<"Ukupan broj studenata: "<<studenti.size()<<std::endl;
    
    std::cout<<std::endl<<"Spisak studenata:"<<std::endl;
    for(int i=0;i<studenti.size();i++){
        std::cout<<i+1<<". "<<studenti.at(i).ime<<" "<<studenti.at(i).prezime<<" "<<studenti.at(i).indeks<<std::endl;
    }
    
    return 0;
}