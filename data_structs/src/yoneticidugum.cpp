/**
 * @ file : yoneticidugum.cpp
 * @ description : Yonetici listemin dugumunun kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 15.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include "yoneticidugum.hpp"

yoneticidugum::yoneticidugum(float veri)
{
    this->veri=veri;
    onceki=sonraki=0;
    liste_tut=0;
}
yoneticidugum::~yoneticidugum(){
    cout<<this<<"adresindeki dugum silindi."<<endl;
}