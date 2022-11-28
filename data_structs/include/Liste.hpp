/**
 * @ file : Liste.hpp
 * @ description : Satir listelerimi tutan listenin baslik dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 10.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef Liste_hpp
#define Liste_hpp
#include<exception>
#include<iostream>
#include<fstream>
#include<sstream>
#include "Dugum.hpp"
#include "konsol_pozisyonu.hpp"

class Liste
{
    public:
        Liste();
        ~Liste();
        Dugum* ilk;
        Liste*sonraki;
        Liste*onceki;
        void ekle(int veri);
        void cikar();
        void cikar_sira(int sira);
        void dosyadanbaglilisteaktar();
        int liste_buyukluk();
        float liste_ortalama();
        void basa_ekle(int veri);
        void printliste(int x,int y);

        

        friend ostream& operator <<(ostream& os,Liste& liste);

    private:
        
        Dugum* dugumGetir(int sira);
        
        int size;
        

};

#endif