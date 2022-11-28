/**
 * @ file : Dugum.hpp
 * @ description : Satir listelerimi tutacagim dugumun baslik dosyasi 
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 10.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef Dugum_hpp
#define Dugum_hpp
#include<iostream>
using namespace std;

class Dugum
{
    public:
        Dugum(int veri);
        ~Dugum();
        int veri;
        Dugum* sonraki;
        Dugum* onceki;
};

#endif
