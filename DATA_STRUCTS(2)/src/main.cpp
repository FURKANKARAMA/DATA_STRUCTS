/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#include<iostream>
#include<iomanip>
#include"hucrelist.hpp"
#include"kuyruk.hpp"
#include"Radix.hpp"
#include"doku_olustur.hpp"
#include"organ_olustur.hpp"
using namespace std;

int main()
{
    
    doku_olustur * doku =new doku_olustur();
    doku->text_oku();
    cout<<*doku;

   /* organ_olustur*organ=new organ_olustur();
    organ->organ_doldur();
    cout<<*organ;*/

    


    
}