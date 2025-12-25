/*
Napisati program koji racuna sumu prvih 20 prirodnih brojeva koristenjem for petlje.
*/

#include <iostream>

int main(){
    int n=20, suma=0;

    for(int i=1;i<=n;i++){
        suma+=i;
    }
    
    /* drugi nacin
        suma=n*(n+1)/2;
    */

    std::cout<<"Suma prvih 20 prirodnih brojeva je "<<suma<<std::endl;

    return 0;

}
