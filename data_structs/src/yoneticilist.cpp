/**
 * @ file : yoneticilist.cpp
 * @ description : Yonetici listemin kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 15.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include"yoneticilist.hpp"
#include<iomanip>


yoneticilist::yoneticilist()
{
ilk=0;
size=0;
}
yoneticilist::~yoneticilist()
{
    for (int i = 0; i < size; i++)
    {
         aradan_cikar(i);
    }
}
yoneticidugum* yoneticilist::dugumGetir(int sira){
    yoneticidugum* gec = ilk;
    int sayac=1;
    for (yoneticidugum*itr=ilk;itr->sonraki!=0 && sayac!=sira;itr=itr->sonraki,sayac++){
        gec=gec->sonraki;
    }
    return gec;
}
int yoneticilist::Count(){
    return size;
}
Liste*& yoneticilist::Dugum_Liste_Dondur(int index){
    if(index==0){return ilk->liste_tut;}
    return dugumGetir(index)->sonraki->liste_tut;
}
void yoneticilist::elemanekle(int veri,Liste*yeni){

    yoneticidugum*yeniyoneticidugum=new yoneticidugum(veri);
    if (ilk==0)
        {
            ilk=yeniyoneticidugum;
            ilk->liste_tut=yeni;
            size++;
        }
    else{
        yoneticidugum*gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniyoneticidugum;
        yeniyoneticidugum->onceki=gec;
        yeniyoneticidugum->liste_tut=yeni;
        size++;
        }    
}
void yoneticilist::onune_ekle(int sira,int veri,Liste*yeni){
    yoneticidugum*aktifdugum=dugumGetir(sira);
    if (aktifdugum)
    {
        yoneticidugum*aktifonceki=aktifdugum->onceki;
        yoneticidugum*yeniyoneticidugum=new yoneticidugum(veri);
        aktifdugum->onceki=yeniyoneticidugum;
        yeniyoneticidugum->sonraki=aktifdugum;
        yeniyoneticidugum->liste_tut=yeni;
        yeniyoneticidugum->onceki=aktifonceki;
        if (aktifonceki)
        {
            aktifonceki->sonraki=yeniyoneticidugum;
        }
        else
        {ilk=yeniyoneticidugum;}
    }
}
void yoneticilist::arkasina_ekle(int sira,int veri,Liste*yeni){
    yoneticidugum*aktifdugum=dugumGetir(sira);
    if (aktifdugum)
    {
        yoneticidugum*aktifsonraki=aktifdugum->sonraki;
        yoneticidugum*yeniyoneticidugum=new yoneticidugum(veri);
        aktifdugum->sonraki=yeniyoneticidugum;
        yeniyoneticidugum->onceki=aktifdugum;
        yeniyoneticidugum->liste_tut=yeni;
        yeniyoneticidugum->sonraki=aktifsonraki;
        if (aktifsonraki)
        {
            aktifsonraki->onceki=yeniyoneticidugum;
        }
        else{
            ilk=yeniyoneticidugum;
        }
    }
}
void yoneticilist::liste_doldur(){
    satirliste*satir=new satirliste();
    satir->text_oku();   
    Liste*gecliste=satir->ilk;
    Liste*karsilastir=satir->ilk;
     while (gecliste->sonraki!=0)
        {
            
            elemanekle(gecliste->liste_ortalama(),gecliste);
            gecliste=gecliste->sonraki;
            karsilastir=karsilastir->sonraki;
        }
}
void yoneticilist::basa_ekle(int veri,Liste*yeni)
{
    yoneticidugum*yenidugum=new yoneticidugum(veri);
    if (ilk==0)
    {
        ilk=yenidugum;
    }
    else{
        yoneticidugum*gec=ilk;
        ilk->onceki=yenidugum;
        yenidugum->sonraki=ilk;
        yenidugum->liste_tut=yeni;
        ilk=yenidugum;
    }
}
void yoneticilist::aradan_cikar(int sira)
{
     yoneticidugum* silinecek=dugumGetir(sira);
    if (silinecek)
    {
        yoneticidugum* silinecekonceki=silinecek->onceki;
        yoneticidugum*silineceksonraki=silinecek->sonraki;
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
void yoneticilist::siralama(){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (dugumGetir(j+1)->veri>dugumGetir(j+2)->veri)
            {
                //yer_degistir(j+1,j);
                int value=dugumGetir(j+1)->veri;
                dugumGetir(j+1)->veri=dugumGetir(j+2)->veri;
                dugumGetir(j+2)->veri=value;

                Liste*yedek=dugumGetir(j+1)->liste_tut;
                dugumGetir(j+1)->liste_tut=dugumGetir(j+2)->liste_tut;
                dugumGetir(j+2)->liste_tut=yedek;
            }
        }
    }
}
int yoneticilist::random_uret(int index){
    int yoneticilist_buyukluk=Count();
    int range=dugumGetir(index+1)->liste_tut->liste_buyukluk();
     srand(time(0));//benzer sayilar üretmemesi icin
     int random_sayi=rand() % range;
     return random_sayi;
}
void yoneticilist::rastgele_satirlist_sil(int index,int inlineindex){
        dugumGetir(index+1)->liste_tut->cikar_sira(inlineindex);
        dugumGetir(index+1)->veri=dugumGetir(index+1)->liste_tut->liste_ortalama();
}
void yoneticilist::printIndex(int index,int x,int y){
    yoneticidugum*yenidugum=dugumGetir(index+1);
    konsol_pozisyonu.gotoxy(x,y);
    cout<<fixed<<setprecision(2);
    cout<<yenidugum<<"\n";
    konsol_pozisyonu.gotoxy(x,y+1);
    cout<<"------------\n";
    konsol_pozisyonu.gotoxy(x,y+2);
    cout<<"|"<<yenidugum->onceki<<setw(3)<<"|\n";
    konsol_pozisyonu.gotoxy(x,y+3);
    cout<<"------------\n";
    konsol_pozisyonu.gotoxy(x,y+4);
    cout<<"|"<<setw(3)<<yenidugum->veri<<setw(5)<<"|"<<endl;
    konsol_pozisyonu.gotoxy(x,y+5);
    cout<<"------------\n";
    konsol_pozisyonu.gotoxy(x,y+6);
    cout<<"|"<<yenidugum->sonraki<<setw(3)<<"|\n";
    konsol_pozisyonu.gotoxy(x,y+7);
    cout<<"------------\n\n";
}
