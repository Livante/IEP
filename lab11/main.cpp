#include <iostream>
#include <string>
#include <list>
#include <math.h>
using namespace std;
#include "punct.h"
#include "figura.h"
#include "triunghi.h"
#include "dreptunghi.h"
#include "octagon.h"
#include "cerc.h"

template <typename T>
double panta(T x)
{
    Punct p1,p2;
    p1=x.getPunct(0);
    p2=x.getPunct(1);
    double nr1=p2.getY()-p1.getY();
    double nr2=p2.getX()-p1.getX();
    return nr1/nr2;
}

int main()
{
    Figura f[100];
    Triunghi t[100];
    Dreptunghi d[100];
    Octagon o[100];
    int fn=0,tn=0,dn=0,on=0,cn=0;
    Cerc *myCerc=myCerc->getInstance();
    myCerc->setData(3.0,Punct(0,0));

    /*Meniu*/
    int m,n,i,j,ok;
    double x,y;
    do
    {
        cout<<"Meniu:"<<endl;
        cout<<"1.Adauga triunghi"<<endl;
        cout<<"2.Adauga dreptunghi"<<endl;
        cout<<"3.Adauga octagon"<<endl;
        cout<<"4.Modifica cerc"<<endl;
        cout<<"5.Perimetrul unei figuri: "<<endl;
        cout<<"6.Afiseaza panta unei figuri"<<endl;
        cout<<"7.Verifica daca o figura are puncte pe cerc"<<endl;
        cout<<"8.Afisare figuri"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Introduceti numarul operatiei dorite:"<<endl;
        cin>>m;
        cout<<endl;
        switch(m)
        {
        case 1:
            cout<<"Introduceti coordonata x a primului punct al triunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a primului punct al triunghiului: ";
            cin>>y;
            t[tn].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al doilea punct al triunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al doilea punct al triunghiului: ";
            cin>>y;
            t[tn].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al treilea punct al triunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al treilea punct al triunghiului: ";
            cin>>y;
            t[tn].addPunct(Punct(x,y));
            tn++;
            break;
        case 2:
            cout<<"Introduceti coordonata x a primului punct al dreptunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a primului punct al dreptunghiului: ";
            cin>>y;
            d[dn].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al doilea punct al dreptunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al doilea punct al dreptunghiului: ";
            cin>>y;
            d[dn].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al treilea punct al dreptunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al treilea punct al dreptunghiului: ";
            cin>>y;
            d[dn].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al patrulea punct al dreptunghiului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al patrulea punct al dreptunghiului: ";
            cin>>y;
            d[dn].addPunct(Punct(x,y));
            dn++;
            break;
        case 3:
            cout<<"Introduceti coordonata x a primului punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a primului punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al doilea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al doilea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al treilea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al treilea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al patrulea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al patrulea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al cincilea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al cincilea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al saselea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al saselea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al saptelea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al saptelea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            cout<<"Introduceti coordonata x a celui de-al optulea punct al octagonului: ";
            cin>>x;
            cout<<"Introduceti coordonata y a celui de-al optulea punct al octagonului: ";
            cin>>y;
            o[on].addPunct(Punct(x,y));
            on++;
            break;
        case 4:
            cout<<"Introduceti coordonata x punctului de origine al cercului: ";
            cin>>x;
            cout<<"Introduceti coordonata x punctului de origine al cercului: ";
            cin>>y;
            cout<<"Introduceti raza cercului: ";
            double raza;
            cin>>raza;
            myCerc->setData(raza,Punct(x,y));
            break;
        case 5:
            cout<<"Pentru ce tip de figura sa se calculeze perimetrul?"<<endl;
            cout<<"1.Triunghi"<<endl;
            cout<<"2.Dreptunghi"<<endl;
            cout<<"3.Octagon"<<endl;
            cout<<"Introduceti numarul operatiei dorite:"<<endl;
            cin>>n;
            if(n==1)
            {
                cout<<"Pe al catelea triunghi sa se calculeze perimetrul?";
                cin>>i;
                if(i<tn)
                {
                    cout<<"Perimetrul triunghiului cu numarul "<<i<<" este: "<<t[i].perimetru()<<endl;
                }
            }
            if(n==2)
            {
                cout<<"Pe al catelea dreptunghi sa se calculeze perimetrul?";
                cin>>i;
                if(i<dn)
                {
                    cout<<"Perimetrul dreptunghiului cu numarul "<<i<<" este: "<<d[i].perimetru()<<endl;
                }
            }
            if(n==3)
            {
                cout<<"Pe al catelea octagon sa se calculeze perimetrul?";
                cin>>i;
                if(i<on)
                {
                    cout<<"Perimetrul octagonului cu numarul "<<i<<" este: "<<o[i].perimetru()<<endl;
                }
            }
            break;
        case 6:
            cout<<"Pentru ce tip de figura sa se calculeze panta?"<<endl;
            cout<<"1.Triunghi"<<endl;
            cout<<"2.Dreptunghi"<<endl;
            cout<<"3.Octagon"<<endl;
            cout<<"Introduceti numarul operatiei dorite:"<<endl;
            cin>>n;
            if(n==1)
            {
                cout<<"Pe al catelea triunghi sa se calculeze panta?";
                cin>>i;
                if(i<tn)
                {
                    cout<<"Panta triunghiului cu numarul "<<i<<" este: "<<panta(t[i])<<endl;
                }
            }
            if(n==2)
            {
                cout<<"Pe al catelea dreptunghi sa se calculeze panta?";
                cin>>i;
                if(i<dn)
                {
                    cout<<"Panta dreptunghiului cu numarul "<<i<<" este: "<<panta(d[i])<<endl;
                }
            }
            if(n==3)
            {
                cout<<"Pe al catelea octagon sa se calculeze panta?";
                cin>>i;
                if(i<on)
                {
                    cout<<"Panta octagonului cu numarul "<<i<<" este: "<<panta(o[i])<<endl;
                }
            }
            break;
        case 7:
            cout<<"Care tip de figura sa se verifice daca se afla pe cerc?"<<endl;
            cout<<"1.Triunghi"<<endl;
            cout<<"2.Dreptunghi"<<endl;
            cout<<"3.Octagon"<<endl;
            cout<<"Introduceti numarul operatiei dorite:"<<endl;
            cin>>n;
            ok=0;
            if(n==1)
            {
                cout<<"Al catelea triunghi sa se verifice daca se afla pe cerc?";
                cin>>j;
                for(i=0;i<3;i++)
                {
                    if((myCerc->estePeCerc(t[j].getPunct(i),myCerc->getOrigin(),myCerc->getRaza()))==1)
                    {
                        cout<<"Figura este pe cerc"<<endl;
                        ok=1;
                        break;
                    }
                }
                if(ok!=1)
                {
                    cout<<"Figura nu este pe cerc"<<endl;
                }
            }
            if(n==2)
            {
                cout<<"Al catelea dreptunghi sa se verifice daca se afla pe cerc?";
                cin>>i;
                for(i=0;i<4;i++)
                {
                    if((myCerc->estePeCerc(d[j].getPunct(i),myCerc->getOrigin(),myCerc->getRaza()))==1)
                    {
                        cout<<"Figura este pe cerc"<<endl;
                        ok=1;
                        break;
                    }
                }
                if(ok!=1)
                {
                    cout<<"Figura nu este pe cerc"<<endl;
                }
            }
            if(n==3)
            {
                cout<<"Al catelea octagon sa se verifice daca se afla pe cerc?";
                cin>>i;
                for(i=0;i<8;i++)
                {
                    if((myCerc->estePeCerc(o[j].getPunct(i),myCerc->getOrigin(),myCerc->getRaza()))==1)
                    {
                        cout<<"Figura este pe cerc"<<endl;
                        ok=1;
                        break;
                    }
                }
                if(ok!=1)
                {
                    cout<<"Figura nu este pe cerc"<<endl;
                }
            }
            break;
        case 8:
            for(i=0;i<tn;i++)
            {
                cout<<"Triunghiul "<<i<<" are urmatoarele puncte: ";
                t[i].afisare();
                cout<<endl;
            }
            for(i=0;i<dn;i++)
            {
                cout<<"Dreptunghiul "<<i<<" are urmatoarele puncte: ";
                d[i].afisare();
                cout<<endl;
            }
            for(i=0;i<on;i++)
            {
                cout<<"Octagonul "<<i<<" are urmatoarele puncte: ";
                o[i].afisare();
                cout<<endl;
            }
            myCerc->afisareCerc();
            break;
        case 0:
            exit(1);
        }
        cout<<endl;
    }
    while(m!=0);
}
