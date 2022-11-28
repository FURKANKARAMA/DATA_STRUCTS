/**
 * @ file : yoneticidugum.hpp
 * @ description : Yonetici listemin dugumunun baslik dosyasi 
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 15.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef yoneticidugum_hpp
#define yoneticidugum_hpp
#include<iostream>
#include "Liste.hpp"
using namespace std;

class yoneticidugum
{
    public:
        yoneticidugum(float veri);
        ~yoneticidugum();
        float veri;
        yoneticidugum* sonraki;
        yoneticidugum* onceki;
        Liste* liste_tut;
};

#endif
