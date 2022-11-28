/**
 * @ file : Satirliste.cpp
 * @ description : Satirlistelerimi doldurdugum listenin kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 13.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include"Satirliste.hpp"
#include<iomanip>

satirliste::satirliste()
{
ilk=0;
}
satirliste::~satirliste()
{

}
void satirliste::text_oku(){
    ifstream oku("veriler.txt");
    string satir;
    string karakter;
    while (getline(oku,satir))
    {
        istringstream say(satir);
        Liste* yenilistem=new Liste();
        while (getline(say,karakter,' '))
        {
            int sayi=stoi(karakter);
            yenilistem->ekle(sayi);
        }
        if (ilk==0)
        {
            ilk=yenilistem;
        }
        else{
            Liste*gec=ilk;
            while (gec->sonraki!=0)
            {
                gec=gec->sonraki;
            }
            gec->sonraki=yenilistem;
            yenilistem->onceki=gec;
        }
    }
    oku.close();
}




