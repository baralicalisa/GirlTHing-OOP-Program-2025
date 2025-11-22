/*
Napraviti klasu Pravougaonik. 
- Privatni atributi: double sirina, double visina
- Javne metode: 
..void setDimenzije(double s, double v)
..double povrsina() - vraca povrsinu
..double obim() - vraca obim
..void ispisi() - ispisuje sve podatke o pravougaoniku

U main programu:
1. Kreirati dva pravougaonika.
2. Postaviti njihove dimenzije.
3. Ispisati oba pravougaonika, njihove povrsine i obime.
*/

#include <iostream>

class Pravougaonik{
  double sirina;
  double visina;
  
  public:
  void setDimenzije(double s, double v){
      sirina=s;
      visina=v;
  }
  
  double povrsina(){
      return sirina*visina;
  }
  double obim(){
      return 2*sirina + 2*visina;
  }
  
  void ispisi(){
      std::cout<<"Sirina: "<<sirina<<std::endl;
      std::cout<<"Visina: "<<visina<<std::endl;
      std::cout<<"Povrsina: "<<povrsina()<<std::endl;
      std::cout<<"Obim: "<<obim()<<std::endl;
  }
};

int main() {
    Pravougaonik p1, p2;
    double sirina, visina;
    
    std::cout<<"Unesi sirinu 1. pravougaonika: ";
    std::cin>>sirina;
    std::cout<<"Unesi visinu 1. pravougaonika: ";
    std::cin>>visina;
    
    p1.setDimenzije(sirina, visina);
    
    std::cout<<std::endl;
    std::cout<<"Unesi sirinu 2. pravougaonika: ";
    std::cin>>sirina;
    std::cout<<"Unesi visinu 2. pravougaonika: ";
    std::cin>>visina;
    
    p2.setDimenzije(sirina, visina);
    
    std::cout<<std::endl<<"Prvi pravougaonik: "<<std::endl;
    p1.ispisi();
    std::cout<<std::endl<<"Drugi pravougaonik: "<<std::endl;
    p2.ispisi();

    return 0;
}