/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include"hucrelist.hpp"
#include<iomanip>
using namespace std;

hucrelist::hucrelist()
{
    ilk=0;
    sonraki=0;
    size=0;
}
hucrelist::~hucrelist(){
    hucredugum* gec=ilk;
    while (gec!=0)
    {
        hucredugum* silinecek=gec;
        gec=gec->sonraki;
        delete silinecek;
    }
}

void hucrelist::ekle(int veri)
{
    hucredugum* yeniDugum=new hucredugum(veri);
    if (ilk==0)
    {
        ilk=yeniDugum;
        size++;
    }
    else{
        hucredugum*gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        size++;   
    }   
}
int hucrelist::getMax(int a)
{
    hucredugum*yeni=ilk;
    for (int i = 1; i < a; i++)
    {
        if (yeni->sonraki==0)
        {
            
        }
        yeni=yeni->sonraki;
    }
    
    return 0;
}
ostream& operator<<(ostream&os , hucrelist&hucrelist){
    hucredugum*gecici=hucrelist.ilk;
    while (gecici->sonraki==0)
    {
        os<<gecici<<endl;
        gecici=gecici->sonraki;

    }
    
    
    return os;
}
