/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include "avl_dugum.hpp"

Dugum::Dugum(int veri)
{
    this->veri = veri;
    sol=sag=0;
}