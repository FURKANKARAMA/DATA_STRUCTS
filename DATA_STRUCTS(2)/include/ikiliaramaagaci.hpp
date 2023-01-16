/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef ikiliaramaagaci_hpp
#define ikiliaramaagaci_hpp
#include<iostream>
#include "kuyruk.hpp"
using namespace std;
const int MAX = 20;
class IkiliAramaAgaci
{
public:

    IkiliAramaAgaci*sonraki;
	enum HUCREDURUMU{
		HUCRE_BOS=0,
		HUCRE_DOLU=1
        
        
	};

	IkiliAramaAgaci();

	void ekle(int veri);
	void preOrder();
	void postOrder();
	void inOrder();

    friend ostream& operator<<(ostream& os,IkiliAramaAgaci& kuyruk);

private:

	void preOrder(int index) ;

	void postOrder(int index) ;

	void inOrder(int index) ;

	int sol(int index);
	int sag(int index);
	int ebeveyn(int index);
	bool sagVarmi(int index);
	bool solVarmi(int index);
	bool varmi(int index);

	int hucreler[MAX];
	HUCREDURUMU hucreDurumlari[MAX];
};
//diger fonksiyonlar eklenecek
#endif