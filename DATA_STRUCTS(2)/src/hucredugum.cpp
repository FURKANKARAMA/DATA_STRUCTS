/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include "hucredugum.hpp"

hucredugum::hucredugum(int veri)
{
    this->veri=veri;
    sonraki=0;
}
hucredugum::~hucredugum(){
    cout<<this<<"adresindeki dugum silindi."<<endl;
}