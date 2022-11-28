/**
 * @ file : konsol_pozisyonu.hpp
 * @ description : Konsolda pozisyon ayarlarken yardımcı olacak referans bilgilerin baslik dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 18.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef KONSOL_POZISYONU_HPP
#define KONSOL_POZISYONU_HPP

#include <windows.h>

static class konsol_pozisyonu {
public:

    static void gotoxy(int x, int y) {
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    }


} konsol_pozisyonu;


#endif 