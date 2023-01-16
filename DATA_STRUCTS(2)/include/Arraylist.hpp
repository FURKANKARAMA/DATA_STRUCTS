/**
* file Dosya adı
* @description Programınızın açıklaması ne yaptığına dair.
* Veri Yapıları - 2.B
* 2.ÖDEV
* 23.12.2022
* Furkan KARAMA - furkan.karama@ogr.sakarya.edu.tr
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP


class Arraylist{
public:
    Arraylist();
    void add( int item);//dizinin sonuna eleman ekler
    void insert(int i, int item);//dizin istelilen indisine eleman ekler
    int size() const;//dizini boyutunu verir
    bool isEmpty() const;//diziyi bos mu diye kontrol eder
    int elementAt(int i) ;//belirtilen indisteki elemani verir
    void removeAt(int i);//belirtilen indisteki elemani siler 
    void clear();//diziyi sifirlar
    void putAt(int ,int);//dizinin istenilen yerine eleman koyar  insertten farki indisteki elemanin uzerine yaziliyor olmasi
    void reverseArr();//diziyi tersine cevirir
    int *items;
    ~Arraylist();
    
private:
   
    int length;
    int capacity;
    void reverse(int);//yeni alan olusturur
};


#endif /* ARRAYLIST_HPP */