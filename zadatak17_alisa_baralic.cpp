/*
Definisati klasu/strukturu Ocjena koja je opisana sa sljedecim 
atributima: predmet (naziv predmeta) i vrijednost (brojcana vrijednost od 6-10). 
Definisati klasu/strukturu Student koji je opisan sa sljedecim atributima - ime, 
brojIndeksa i vektor ocjena. Napisati main program koji korisniku omogucava unos 
studenata (sa njegovim ocjenama) dokle korisnik to zeli. 
Nadograditi zadatak sa funkcijom koja nakon sto korisnik zavrsi sa unosom svih 
studenata te iste studente i ispisuje na ekranu i ima sljedeci potpis: 
void ispisiSveStudente(const vector<Student>& studenti);
*/

#include <iostream>
#include <string>
#include <vector>

class Ocjena{
    std::string predmet;
    int vrijednost;
    
    public:
    void setPredmet(const std::string &p){
        predmet=p;
    }
    void setVrijednost(const int &v){
        vrijednost=v;
    }
    
    std::string getPredmet() const{
        return predmet;
    }
    int getVrijednost() const{
        return vrijednost;
    }
};

class Student{
    std::string ime;
    std::string brojIndeksa;
    std::vector<Ocjena>ocjene;
    
    public:
    void setIme(const std::string &i){
        ime=i;
    }
    void setBrojIndeksa(const std::string &bi){
        brojIndeksa=bi;
    }
    void setOcjene(const Ocjena &o){
        ocjene.push_back(o);
    }
    
    std::string getIme() const{
        return ime;
    }
    std::string getBrojIndeksa() const{
        return brojIndeksa;
    }
    std::vector<Ocjena> getOcjene() const{
        return ocjene;
    }
};

void ispisiSveStudente(const std::vector<Student>&studenti){
    std::cout<<std::endl<<"ISPIS STUDENATA:"<<std::endl;
    for(const auto &s : studenti){
        std::cout<<"Ime: "<<s.getIme()<<std::endl;
        std::cout<<"Broj indeksa: "<<s.getBrojIndeksa()<<std::endl;
        for (const auto &o : s.getOcjene()){
            std::cout<<"Naziv predmeta: "<<o.getPredmet()<<std::endl;
            std::cout<<"Ocjena: "<<o.getVrijednost()<<std::endl;
        }
        std::cout<<std::endl;
    }
}

int main() {
    std::vector<Student>studenti;
    bool unos=true;
    while(unos){
        Student s;
        std::string ime, indeks;
     
        std::cout<<"Unesite ime studenta: ";
        std::getline(std::cin, ime);
        s.setIme(ime);
     
        std::cout<<"Unesite broj indeksa: ";
        std::getline(std::cin, indeks);
        s.setBrojIndeksa(indeks);
     
        bool novaOcjena=true;
        while(novaOcjena){
            Ocjena o;
            std::string predmet;
            int vrijednost;
         
            std::cout<<"Unesite naziv predmeta: ";
            std::getline(std::cin, predmet);
            o.setPredmet(predmet);
         
            do{
                std::cout<<"Unesite ocjenu (6 - 10): ";
                std::cin>>vrijednost;
             
                if(vrijednost<6 || vrijednost>10){
                    std::cout<<"Greška: Ocjena mora biti između 6 i 10. Pokušajte ponovo!";
                }
            }while(vrijednost<6 || vrijednost>10);
            o.setVrijednost(vrijednost);
         
            s.setOcjene(o);
         
            std::cin.clear();
            std::cin.ignore(10000, '\n');
         
            std::string nova;
            novaOcjena=false;
            std::cout<<"Da li želite unijeti još jednu ocjenu? (da/ne) ";
            std::getline(std::cin, nova);
            if(nova=="da" || nova=="Da" || nova=="DA" || nova=="dA"){
                novaOcjena=true;
            }
        }
     
        studenti.push_back(s);
     
        std::string noviStudent;
        unos=false;
        std::cout<<std::endl<<"Da li želite unijeti još jednog studenta? (da/ne) ";
        std::getline(std::cin, noviStudent);
        if(noviStudent=="da" || noviStudent=="Da" || noviStudent=="DA" || noviStudent=="dA"){
            unos=true;
        }
    }
    
    ispisiSveStudente(studenti);

    return 0;
}

