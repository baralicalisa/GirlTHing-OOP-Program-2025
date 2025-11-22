/*
Napraviti klasu Student koja ima:
- Privatne atrubute: string ime, string prezime, int godina
- Javne metode:
-- void postaviIme(string i)
-- void postaviPrezime(string p)
-- void postaviGodinu(int g)
-- string getIme()
-- string getPrezime()
-- int getGodina()
-- void ispisi() - ispisuje sve podatke

U main programu:
-- napraviti tri studenta
-- postaviti im podatke putem metoda
-- pokusati direktno pristupiti atributu npr. student1.ime kako bi se pokazalo da to nije dozvoljeno (komentar u kodu)   
*/

#include <iostream>
#include <string>
#include <vector>

class Student{
    std::string ime;
    std::string prezime;
    int godina;
    
    public:
    void postaviIme(std::string i){
        ime=i;
    }
    void postaviPrezime(std::string p){
        prezime=p;
    }
    void postaviGodinu(int g){
        godina=g;
    }
    
    std::string getIme(){
        return ime;
    }
    std::string getPrezime(){
        return prezime;
    }
    int getGodina(){
        return godina;
    }
    
    void ispisi(){
        std::cout<<"Ime: "<<ime<<std::endl;
        std::cout<<"Prezime: "<<prezime<<std::endl;
        std::cout<<"Godina: "<<godina<<std::endl;
    }
};

int main() {
    std::vector<Student>studenti(3);
    
    for(int i=0;i<3;i++){
        std::string ime, prezime;
        int godina;
        
        std::cout<<"Unesite ime "<<i+1<<". studenta: ";
        std::getline(std::cin, ime);
        studenti.at(i).postaviIme(ime);
        
        std::cout<<"Unesite prezime "<<i+1<<". studenta: ";
        std::getline(std::cin, prezime);
        studenti.at(i).postaviPrezime(prezime);
        
        std::cout<<"Unesite godinu "<<i+1<<". studenta: ";
        std::cin>>godina;
        studenti.at(i).postaviGodinu(godina);
        
        std::cout<<std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    std::cout<<std::endl<<"Uneseni su sljedeci studenti: "<<std::endl;
    for(int i=0;i<3;i++){
        std::cout<<i+1<<". student:"<<std::endl;
        studenti.at(i).ispisi();
        std::cout<<std::endl;
    }
    
    //nedozvoljeni pristup atributima (direktno)
    //std::cout<<studenti.at(1).ime;
    //std::cout<<studenti.at(1).prezime;
    //std::cout<<studenti.at(1).godina;

    return 0;
}