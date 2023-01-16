/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include"organ_olustur.hpp"
#include<iomanip>
organ_olustur::organ_olustur()
{
    ilk=0;
}
organ_olustur::~organ_olustur()
{

}

void organ_olustur::organ_doldur(){
doku_olustur*dokular=new doku_olustur();

Kuyruk*yenikuyruk=new Kuyruk();
int a=0;
dokular->text_oku();

yenikuyruk=dokular->ilk;
while (a==32000)//32.000 satir veri var.
{
    IkiliAramaAgaci*ikiliagaclarim=new IkiliAramaAgaci();
        for (int i = 0; i < 20; i++)
    {
        yenikuyruk=yenikuyruk->sonraki;
        int ortanca=((yenikuyruk->veriSayisi-1)/2)+1;
        int eklenecek_veri=yenikuyruk->veriler[ortanca];
        ikiliagaclarim->ekle(eklenecek_veri);
        



        a++;


    }
    if (ilk==0)
    {
        ilk=ikiliagaclarim;
    }
    else{
        IkiliAramaAgaci*gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;

        }
        gec->sonraki=ikiliagaclarim;
    }
    

}







}

ostream&operator<<(ostream&yaz ,organ_olustur&satir){
    using namespace std;
    yaz<<setw(15)<<"f";
    IkiliAramaAgaci*gec=satir.ilk;
    while (gec!=0)
    {
        //yaz<<setw(15)<<gec<<setw(15)<<*gec;
        yaz<<setw(15)<<*gec;
        gec=gec->sonraki;
    }
    
    return yaz;
}
