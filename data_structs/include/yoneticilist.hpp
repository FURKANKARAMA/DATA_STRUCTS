/**
 * @ file : yoneticilist.hpp
 * @ description : Yonetici listemin baslik dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 15.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef yoneticilist_hpp
#define yoneticilist_hpp
#include<exception>
#include<iostream>
#include<fstream>
#include<sstream>
#include <time.h>
#include <stdlib.h>  
#include "konsol_pozisyonu.hpp"
#include "Liste.hpp"
#include"Satirliste.hpp"
#include"yoneticidugum.hpp"

class yoneticilist
{
public:
    yoneticilist();
    ~yoneticilist();
    yoneticidugum* dugumGetir(int sira);
    int Count();
    Liste*& Dugum_Liste_Dondur(int index);
    void elemanekle(int veri,Liste*yeni);
    void onune_ekle(int sira,int veri,Liste*yeni);
    void arkasina_ekle(int sira,int veri,Liste*yeni);
    void liste_doldur();
    void basa_ekle(int veri,Liste*yeni);
    void aradan_cikar(int sira);
    void siralama();
    int random_uret(int index);
    void rastgele_satirlist_sil(int index,int inlineindex);
    void printIndex(int index, int x, int y);

private:
    yoneticidugum* ilk;
    int size;

};



#endif