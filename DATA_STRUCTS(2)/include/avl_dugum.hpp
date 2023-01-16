/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* @course Dersi aldığınız eğitim türü ve grup
* @assignment Kaçıncı ödev olduğu
* date Kodu oluşturduğunuz Tarih
* author Gruptakilerin yazar adları ve mail adresleri*/

#ifndef avl_dugum_hpp
#define avl_dugum_hpp

class Dugum
{
public:
    Dugum(int veri);
    int veri;
    Dugum* sol;
    Dugum* sag;
};

#endif