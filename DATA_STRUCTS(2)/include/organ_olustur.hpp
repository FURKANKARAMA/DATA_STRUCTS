/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef organ_olustur_hpp
#define organ_olustur_hpp

#include<exception>
#include<iostream>

#include "ikiliaramaagaci.hpp"
#include "doku_olustur.hpp"
#include "kuyruk.hpp"

class organ_olustur
{
public:
    organ_olustur();
    ~organ_olustur();
    void organ_doldur();
    IkiliAramaAgaci*ilk;

    friend ostream& operator <<(ostream& yaz,organ_olustur& satir);
    

private:


};

#endif