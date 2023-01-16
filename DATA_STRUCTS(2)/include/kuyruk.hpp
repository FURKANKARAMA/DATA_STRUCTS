/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef kuyruk_hpp
#define kuyruk_hpp
#include<iostream>
using namespace std;

class Kuyruk
{
public:
	Kuyruk();
	~Kuyruk();
	int veriSayisi;
	void ekle(int veri);
	void cikar();
    bool bosmu();
    bool dolumu();
	int getir();
	Kuyruk*sonraki;
	int* veriler;
	
    friend ostream& operator<<(ostream& os,Kuyruk& yigin);
private:
	void genislet(int boyut);
	int kapasite;
    
	int son;
	int ilk;
	
};

#endif