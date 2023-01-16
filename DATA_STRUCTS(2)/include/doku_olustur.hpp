/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* @course Dersi aldığınız eğitim türü ve grup
* @assignment Kaçıncı ödev olduğu
* date Kodu oluşturduğunuz Tarih
* author Gruptakilerin yazar adları ve mail adresleri*/

#ifndef doku_olustur_hpp
#define doku_olustur_hpp
#include<exception>
#include<iostream>
#include<fstream>
#include<sstream>
#include "Dugum.hpp"
#include "kuyruk.hpp"
#include "Radix.hpp"
#include "Arraylist.hpp"


class doku_olustur
{
public:
    doku_olustur();
    ~doku_olustur();
    
    void text_oku();
    void basa_ort_ekle();
    void printdoku_olustursi(int x,int y);
    Kuyruk * ilk;
    
    
    

    friend ostream& operator <<(ostream& yaz,doku_olustur& satir);
private:
    

};






#endif