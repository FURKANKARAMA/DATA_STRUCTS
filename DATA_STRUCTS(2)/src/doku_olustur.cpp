/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include"doku_olustur.hpp"
#include<iomanip>

doku_olustur::doku_olustur()
{
ilk=0;
}
doku_olustur::~doku_olustur()
{

}

void doku_olustur::text_oku(){

    ifstream oku("Veri.txt");
string satir;
string karakter;


while (getline(oku,satir))
{
    istringstream say(satir);
    Kuyruk* yeniKuyrukm=new Kuyruk();
    Arraylist*yeniarray=new Arraylist();
    int sayilar[]={0};
    int sayac=0;
    while (getline(say,karakter,' '))
    {
        int sayi=stoi(karakter);
        yeniKuyrukm->ekle(sayi);
        sayac++;
        
    }
  

    if (ilk==0)
    {
        Radix *yeniradix=new Radix(yeniKuyrukm->veriler,sayac);
        yeniKuyrukm->veriler=yeniradix->sirala();
        ilk=yeniKuyrukm;
        
    }
    else{
        Kuyruk*gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
       Radix *yeniradix=new Radix(yeniKuyrukm->veriler,sayac);
       yeniKuyrukm->veriler=yeniradix->sirala();
        gec->sonraki=yeniKuyrukm;
        
    }
    
}
oku.close();

}

ostream&operator<<(ostream&yaz ,doku_olustur&satir){
    using namespace std;
    
    Kuyruk*gec=satir.ilk;
    while (gec!=0)
    {
        //yaz<<setw(15)<<gec<<setw(15)<<*gec;
        yaz<<setw(15)<<*gec;
        gec=gec->sonraki;
    }
    
    return yaz;
}