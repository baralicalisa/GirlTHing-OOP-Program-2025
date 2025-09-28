/*
Napisi program u C++ jeziku koji omogucava korisniku da unese 10 cijelih brojeva u niz.
Program zatim: 
1. Ispisuje sve unesene brojeve.
2. Ispisuje najveci broj u nizu.
3. Ispisuje sve parne brojeve.
*/

#include <iostream>

int main(){
    int niz[10], n=10;
    std::cout<<"Unesite "<<n<<" brojeva: ";
    for(int i=0;i<n;i++){
        std::cin>>niz[i];
    }
    std::cout<<std::endl<<"Uneseni brojevi su: ";
    for(int i=0;i<n;i++){
        std::cout<<niz[i]<<" ";
    }

    int najveci=niz[0];
    for(int i=1;i<n;i++){
        if(niz[i]>najveci){
            najveci=niz[i];
        }
    }
    std::cout<<std::endl<<"Najveći broj u nizu je "<<najveci;

    std::cout<<std::endl<<"Parni brojevi su: ";
    for(int i=0;i<n;i++){
        if(niz[i]%2==0){
            std::cout<<niz[i]<<" ";
        }
    }


}