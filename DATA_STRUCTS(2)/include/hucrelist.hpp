/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/
#ifndef hucrelist_hpp
#define hucrelist_hpp
#include<exception>
#include<iostream>
#include<fstream>
#include<sstream>
#include<ostream>
#include "hucredugum.hpp"

class hucrelist
{
    public:
        hucrelist();
        ~hucrelist();
        hucredugum* ilk;
        hucredugum*sonraki;
        void ekle(int veri);
        int getMax(int a);
        void cikar();
        void cikar_sira(int sira);
        void dosyadanbaglilisteaktar();
        int liste_buyukluk();
        float liste_ortalama();
        void basa_ekle(int veri);
        void printliste(int x,int y);
        friend ostream& operator <<(ostream&os , hucrelist&hucrelist);

        

        

    private:
        
        hucredugum* dugumGetir(int sira);
        
        int size;
        

};

#endif