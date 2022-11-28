/**
 * @ file : konsol_show.hpp
 * @ description : konsolda ekranda degisiklikleri ve gerekli komutlarin yapilmasini sağlayan kismin baslik dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 18.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef KONSOL_SHOW_HPP
#define KONSOL_SHOW_HPP

#include "yoneticilist.hpp"
#include "konsol_pozisyonu.hpp"

#define DisplayperOnePage 8
#define BeginOffset 0

enum yonlendir{
    yukari=0,
    asagi=1,
    refresh=2,
};
enum sayfa_yonlendir {
    yukariPage = 0,
    asagiPage = 1,
};
class konsol_show
{
private:
yoneticilist*yonetici;

int state;
int beginOffset;
int finishOffset;

void sayfa_ayar();
   
public:
    void guncelle(yonlendir dr);
    void sayfa_ayarla(sayfa_yonlendir pdr);
    konsol_show(yoneticilist*yonetici);
    void printYoneticiListesi();
    void secili_liste_yazdir(int x, int y);
    int Random_Dugum_Secme();
    void Yonetici_dugum_silme();
    void Random_Secili_Sil(int randomIndex);
};




#endif