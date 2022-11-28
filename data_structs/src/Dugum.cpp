/**
 * @ file : Dugum.cpp
 * @ description : Satir listelerimi tutacagim dugumun kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 10.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include "Dugum.hpp"

Dugum::Dugum(int veri)
{
    this->veri=veri;
    onceki=sonraki=0;
}
Dugum::~Dugum(){
    cout<<this<<"adresindeki dugum silindi."<<endl;
}