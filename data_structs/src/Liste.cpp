/**
 * @ file : Liste.cpp
 * @ description : Satir listelerimi tutan listenin kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 10.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include"Liste.hpp"
#include<iomanip>

Liste::Liste()
{
    ilk=0;
    onceki=sonraki=0;
    size=0;
}
Liste::~Liste(){
    Dugum* gec=ilk;
    while (gec!=0)
    {
        Dugum* silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
}
void Liste::ekle(int veri)
{
    Dugum* yeniDugum=new Dugum(veri);
    if (ilk==0)
    {
        ilk=yeniDugum;
        size++;
    }
    else{
        Dugum*gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
        size++;   
    }   
}
void Liste::cikar()
{
    if (ilk==0)
    {
        return;
    }
    else if (ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;
        size--;
    }
    else{
        Dugum* gec =ilk;
        while (gec->sonraki->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        delete gec->sonraki;
        gec->sonraki=0;
        size--;
    }
}
void Liste::cikar_sira(int sira){
    Dugum* silinecek=dugumGetir(sira);
    if (silinecek)
    {
        Dugum* silinecekonceki=silinecek->onceki;
        Dugum*silineceksonraki=silinecek->sonraki;
        if (silineceksonraki)
        {
            silineceksonraki->onceki=silinecekonceki;
            /* code */
        }
        if (silinecekonceki)
        {
            silinecekonceki->sonraki=silineceksonraki;
            /* code */
        }
        else{
            ilk=silineceksonraki;
        }
        delete silinecek;
        size--;   
    }
}
void Liste:: dosyadanbaglilisteaktar(){
ifstream oku("veriler.txt");
string satir;
string karakter;
while (getline
(oku,satir))
{
    istringstream say(satir);
    while (getline(say,karakter,' '))
    {
        int sayi=stoi(karakter);
        ekle(sayi);
    }
    ekle(111111111);
}
oku.close();

}
int Liste::liste_buyukluk(){
    return size;
}
float Liste::liste_ortalama(){
    float ortalama=0;
    float bol=1;
    if (ilk==0)
    {
        return 0;
    }
    else{
        Dugum*gec=ilk;
        while (gec->sonraki!=0)
        {
            ortalama=ortalama+gec->veri;
            gec=gec->sonraki;
            bol++;
        }
        ortalama=ortalama+gec->veri;
       return ortalama/bol;
    }
}
void Liste::basa_ekle(int veri){
    Dugum*yenidugum=new Dugum(veri);
    if (ilk==0)
    {
        ilk=yenidugum;
        size++;
    }
    else{
        Dugum*gec=ilk;
        ilk->onceki=yenidugum;
        yenidugum->sonraki=ilk;
        ilk=yenidugum;
        size++;
    }
}
Dugum* Liste::dugumGetir(int sira){
    Dugum* gec = ilk;
    int sayac=0;
    while(gec!=0){
        if(sayac==sira)
            return gec;
        gec=gec->sonraki;
        sayac++;
    }
}
void Liste::printliste(int x,int y){
    int yIndex=y; 
    konsol_pozisyonu.gotoxy(x,yIndex);
    cout<<"vvvvvvvv\n"; 
     for (Dugum *itr = this->ilk; itr != NULL; itr = itr->sonraki) {
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<itr<<"\n";
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<"-----------\n";
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<"|"<<setw(5)<<itr->veri<<setw(5)<<"|"<<endl;
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<"-----------\n";
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<"|"<<itr->sonraki<<setw(3)<<"|\n";
        konsol_pozisyonu.gotoxy(x,++yIndex);
        cout<<"-----------\n\n";
    }
}