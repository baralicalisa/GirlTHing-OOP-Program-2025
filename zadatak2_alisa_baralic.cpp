/*
Napisati program koji racuna sumu prvih 20 prirodnih brojeva koristenjem for petlje.
*/

#include <iostream>

int main(){
    int n, suma;
    n=20;
    suma=n*(n+1)/2;
    
    
    /* drugi nacin
        suma=0;
        for(int i=1;i<=20;i++){
            suma+=i;
        }
    */

    std::cout<<"Suma prvih 20 prirodnih brojeva je "<<suma<<std::endl;

    return 0;
}