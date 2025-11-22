/*
Napraviti strukturu Tacka koja predstavlja tacku u 2D prostoru.
Struktura treba da sadrzi public atribute: double x i double y
Napraviti funkciju (metodu) unutar strukture:
void Ispisi(), koja ispisuje tacku u formatu: (x,y)
Zatim napraviti klasu Krug, koja:
- ima privatni atribut double poluprecnik
- ima public metodu void setPoluprecnik (double r) koja predstavlja vrijednost
- ima public metodu double povrsina() koja vraca povrsinu kruga
U main programu:
1. Napraviti jedan objekat tipa Tacka i ispisati ga.
2. Napraviti jedan objekat tipa Krug, postaviti poluprecnik i ispisati povrsinu.
*/

#include <iostream>
#include <cmath>

struct Tacka{
  double x;
  double y;
  
  void ispisi(){
      std::cout<<"("<<x<<", "<<y<<")";
  }
};

class Krug{
  double poluprecnik;
  
  public:
  void setPoluprecnik(double r){
      poluprecnik=r;
  }
  double povrsina(){
      const double pi=3.14159;
      return pow(poluprecnik, 2)*pi;
  }
};

int main() {
    Tacka tacka;
    
    std::cout<<"Unesi x: ";
    std::cin>>tacka.x;
    std::cout<<"Unesi y: ";
    std::cin>>tacka.y;
    
    std::cout<<"Tacka ima koordinate ";
    tacka.ispisi();
    std::cout<<std::endl<<std::endl;
    
    Krug krug;
    double r;
    std::cout<<"Unesi poluprecnik kruga: ";
    std::cin>>r;
    krug.setPoluprecnik(r);
    
    std::cout<<"Povrsina kruga iznosi "<<krug.povrsina()<<std::endl;
    
    return 0;
}