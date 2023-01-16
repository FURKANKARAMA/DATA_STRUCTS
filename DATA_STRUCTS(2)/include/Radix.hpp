/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef Radix_hpp
#define Radix_hpp
#include "kuyruk.hpp"

class Radix
{
public:
    Radix(int* sayilar,int adet);
    ~Radix();
    int* sirala();
    Kuyruk ** kuyruklar;

private:
    int     maxBasamakSayisiGetir();
    int     basamakSayisiGetir(int sayi);
    void    kuyruklariYazdir();
    void    kuyrukUzunluklariGetir(int* uzunluklar);
    
    int*    sayilar;
    int     sayiAdedi;
};

#endif
