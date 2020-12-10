#include <iostream>
#include <string>
#include <list>
using namespace std;
#include "pasare.cpp"
#include "papagal.cpp"
#include "strut.cpp"
#include "gaina.cpp"

inline const Gaina operator+(Gaina& g,Strut*& s)
{
    g.decrementare();
    Gaina aux("",0);
    aux.setZbor(s->zboara());
    aux.setSunet(s->sunet());
    return aux;
}

int Gaina::nrGaini=0;
Strut *Strut::instance=0;

int main()
{
    Papagal p1("prr",15);
    p1.addCuvant("piept");
    p1.addCuvant("spate");
    p1.addCuvant("biceps");

    Gaina g1("cotcodac",1);
    Gaina g2("cotcodac",2);
    Gaina g3("cotcodac",3);
    Gaina g4("cotcodac",4);
    Gaina g5("cotcodac",5);
    Gaina g6("cotcodac",6);
    Gaina g7("cotcodac",7);
    Gaina g8("cotcodac",8);
    Gaina g9("cotcodac",9);
    Gaina g10("cotcodac",10);
    Gaina g11("cotcodac",11);
    Gaina g12("cotcodac",12);
    Gaina g13("cotcodac",13);
    Gaina g14("cotcodac",14);
    Gaina g15("cotcodac",15);
    Gaina g16("cotcodac",16);
    Gaina g17("cotcodac",17);
    Gaina g18("cotcodac",18);
    Gaina g19("cotcodac",19);
    Gaina g20("cotcodac",20);
    Gaina g21("cotcodac",21);
    Gaina g22("cotcodac",22);
    Gaina g23("cotcodac",23);
    Gaina g24("cotcodac",24);
    Gaina g25("cotcodac",25);
    Gaina g26("cotcodac",26);
    Gaina g27("cotcodac",27);
    Gaina g28("cotcodac",28);
    Gaina g29("cotcodac",29);
    Gaina g30("cotcodac",30);
    Gaina g31("cotcodac",31);
    Gaina g32("cotcodac",32);

    Strut *steve = steve->getInstance("skr",400);
    steve->afisare();
    p1.afisareCuvinte();
    p1.afisare();
    Gaina g0("c",0);
    g0.afisare();
    g1.afisare();
    g1=g0+steve;
    cout<<endl<<endl;
    g0.afisare();
    g1.afisare();

    Papagal p2("",0);
    Papagal p3("paaa",20);
    p2=g17.vanzare(p3);
    p2.afisare();
    p3.afisare();

    return 0;
}
