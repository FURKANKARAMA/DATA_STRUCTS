/**
 * @ file : main.cpp
 * @ description : Ana dosyam
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : (10-19).11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include<iostream>
#include<iomanip>
#include"Liste.hpp"
#include"Satirliste.hpp"
#include"yoneticilist.hpp"
#include "konsol_show.hpp"
using namespace std;

int main()
{
    yoneticilist*yoneticiliste=new yoneticilist();
    yoneticiliste->liste_doldur();
    yoneticiliste->siralama();
    konsol_show*konsol=new konsol_show(yoneticiliste);
    string karakter="";
    do
    {
        konsol->printYoneticiListesi();
        cin>>karakter;
        if(karakter=="c"){
            yonlendir yonlendir=yukari;
            konsol->guncelle(yonlendir);}
        else if (karakter=="z")
            {yonlendir yonlendir=asagi;
            konsol->guncelle(yonlendir);}
        else if (karakter=="a"){konsol->sayfa_ayarla(asagiPage);}
        else if (karakter=="d"){ konsol->sayfa_ayarla(yukariPage);}
        else if (karakter=="p"){konsol->Yonetici_dugum_silme();}
        else if (karakter=="k")
        {int rastgele_sayi=0;
            try
            {
                rastgele_sayi=konsol->Random_Dugum_Secme();
            }
            catch(...){continue;}
            cin>>karakter;
            if (karakter=="k"){
                konsol->Random_Secili_Sil(rastgele_sayi);
                yoneticiliste->siralama();}
        }
    } while (karakter!="q");
}