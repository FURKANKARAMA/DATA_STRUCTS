/**
 * @ file : Satirliste.hpp
 * @ description : Satirlistelerimi doldurdugum listenin baslik dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 13.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef Satirliste_hpp
#define Satirliste_hpp
#include<exception>
#include<iostream>
#include<fstream>
#include<sstream>
#include "Liste.hpp"
#include "Dugum.hpp"

class satirliste
{
public:
    satirliste();
    ~satirliste();
    void text_oku();
    void printSatirlistesi(int x,int y);
    Liste* ilk;
    
private:
    

};






#endif