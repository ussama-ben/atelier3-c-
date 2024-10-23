#ifndef voiture_h
#define voiture_h
#include <string>

using namespace std ;

class voiture {
private :
    string marque ;
    string model ;
    int annee;
    float kilometrage ;
    float vitesse;

public :  
    voiture(); //default constructur 
    voiture(string ma , string mo , int an , float km , float v ) ; // construcur with parametre 
    void accelerer(float valeur); // accelerer methode 
    void freiner(float valeur) ; // freiner methode
    void afficheinfo() const ; //afficheinfo methode 
    void avancer(float valeur) ; //avancer methode
    ~voiture();//destructur
};
#endif


