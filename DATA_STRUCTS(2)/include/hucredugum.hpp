#ifndef hucredugum_hpp
#define hucredugum_hpp
#include<iostream>
using namespace std;

class hucredugum
{
    public:
        hucredugum(int veri);
        ~hucredugum();
        int veri;
        hucredugum* sonraki;
};

#endif