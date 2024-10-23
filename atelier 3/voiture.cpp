#include "voiture.h"
#include <iostream>




voiture ::voiture (){
    marque ="inconnue";
    model =" inconnue";
    annee = 0 ;
    kilometrage = 0.0 ;
    vitesse = 0.0 ;

}

voiture ::voiture(string ma , string mo , int an , float km , float v ) {
        
    marque = ma ;
    model = mo ;
    annee = an ;
    kilometrage = km ;
    vitesse = v;  
}

void voiture ::accelerer(float valeur ){
    vitesse+=valeur ;
    cout<<"la voiture  accelerer de :"<<valeur<<"km/h la vitesse actuel est : "<<vitesse<<"km/h";

}

void voiture ::freiner(float valeur ){
    vitesse -=valeur ;
    if(vitesse<0){
        vitesse = 0 ;
    }
    cout<<"la voiture freine de :"<<valeur<<"km/h le friene actuel est :"<<vitesse<<"km/h";

}

void voiture ::afficheinfo() const {
    cout<<"marque"<<marque<<"model"<<model<<"annee"<<annee<<"kilometrage"<<kilometrage<<"km/h vitesse "<<vitesse<<"hm/h";

}

void voiture :: avancer(float distance){
    kilometrage +=distance ;
    cout<<"la voiture avance de : "<<distance<<"km kilometrage actuel "<<kilometrage<<"km";

}
voiture ::~voiture(){
    cout<<"la voiture de marque "<<marque<<"et de model "<<model<<"est detruite ";
    
}

