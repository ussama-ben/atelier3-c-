#include "Voiture.h"
#include <iostream>

int main() {
    
    voiture voiture1;
    voiture1.afficheinfo();

    
    voiture voiture2("audi", "Q8", 2018, 18-22, 210);
    voiture2.afficheinfo();

   
    voiture2.accelerer(18);
    voiture2.freiner(70);

    
    voiture2.avancer(90);
    voiture2.afficheinfo();

    return 0;
}
