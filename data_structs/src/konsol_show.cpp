/**
 * @ file : konsol_show.cpp
 * @ description : konsolda ekranda degisiklikleri ve gerekli komutlarin yapilmasini sağlayan kismin kaynak dosyasi
 * @ course : Veri Yapilari - 2.B
 * @ assignment : Veri Yapilari 1. Odev
 * @ date : 18.11.2022
 * @ author : Furkan KARAMA - G191210073 - furkan.karama@ogr.sakarya.edu.tr
*/

#include "konsol_show.hpp"

konsol_show::konsol_show(yoneticilist*yonetici){
    this->yonetici = yonetici;
    if (this->yonetici->Count() < DisplayperOnePage) {
        this->finishOffset = this->yonetici->Count();
    } else {
        this->finishOffset = DisplayperOnePage;
    }
    this->beginOffset = BeginOffset;
}
void konsol_show::sayfa_ayar(){
    int page = state / DisplayperOnePage;
    this->beginOffset = DisplayperOnePage*page;
    this->finishOffset = DisplayperOnePage * (page + 1);
    if (this->finishOffset >= this->yonetici->Count()) {
        this->finishOffset = this->yonetici->Count();

    }
}
void konsol_show::guncelle(yonlendir dr) {

    if (dr == yukari) {
        if (state >= this->yonetici->Count() - 1) {
            return;
        }
        ++state;
        sayfa_ayar();
    } else if (dr == asagi) {
        if (state <= 0) {

            return;
        }
        --state;
        sayfa_ayar();
    } else if (dr == refresh) {
        sayfa_ayar();
    }

}
void konsol_show::sayfa_ayarla(sayfa_yonlendir pdr) {
    if (pdr == asagiPage) {
        for (int i = 0; i < DisplayperOnePage; ++i) {
            this->guncelle(asagi);
        }
    } else if (pdr == yukariPage) {
        for (int i = 0; i < DisplayperOnePage; ++i) {
            this->guncelle(yukari);
        }
    }
}
void konsol_show::printYoneticiListesi() {

    int count = yonetici->Count();
    system("cls");
    if (count == 0) {
        cout << "Goruntulenecek bir Yonetici listesi yok\n";
        exit(1);
        return;
    }
    konsol_pozisyonu.gotoxy(0, 0);
    if (this->beginOffset == 0) {
        cout << "<--ilk--";
    } else {
        cout << "<---geri--";
    }
    int showingNodeCount = this->finishOffset - this->beginOffset;
    showingNodeCount *= 13;
    konsol_pozisyonu.gotoxy(showingNodeCount, 0);
    if (this->finishOffset == yonetici->Count()) {
        cout << "--son-->";
    } else {
        cout << "--ileri-->";
    }
    for (int i = this->beginOffset; i<this->finishOffset; ++i) {

        int mod = i % DisplayperOnePage;
        this->yonetici->printIndex(i, 15 * mod, 1);
    }
    this->secili_liste_yazdir((this->state % DisplayperOnePage) *15, 9);
}
void konsol_show::secili_liste_yazdir(int x, int y) {
    yonetici->Dugum_Liste_Dondur(state)->printliste(x,y);
}
void konsol_show::Yonetici_dugum_silme(){
    yonetici->aradan_cikar(state+1);
    guncelle(refresh);
    if (state==finishOffset)
    {
        state--;
    }
    this->guncelle(refresh);
    
}
int konsol_show::Random_Dugum_Secme(){
    if (yonetici->dugumGetir(state+1)->veri==0)
    {
        cout<<"secilecek dugum yok.";
    }
    else{
        int random_secilen=yonetici->random_uret(state);
        int xPosition = ((this->state % DisplayperOnePage)+1 )*15;
        int yPosition =(random_secilen)*6;
        yPosition += 12;
        konsol_pozisyonu.gotoxy(xPosition, yPosition);
        cout<<"<---- silinecek secili";
        yPosition = this->yonetici->Dugum_Liste_Dondur(this->state)->liste_buyukluk()*6 + 12;
        konsol_pozisyonu.gotoxy(0, yPosition - 1);
        return random_secilen;
    }
}
void konsol_show::Random_Secili_Sil(int randomIndex){
    
       
        if (yonetici->dugumGetir(state+1)->liste_tut->liste_buyukluk()==1)
    {
        Yonetici_dugum_silme();
    }
    else
    {
        yonetici->rastgele_satirlist_sil(state,randomIndex);
    }
    
}

