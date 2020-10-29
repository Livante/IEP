#include <iostream>
#include <string.h>
using namespace std;

const int DivideByTwo=2;//constante in loc de define

template<typename T>//folosirea metodelor generice si a functiilor inline
inline bool parity(const T& a)
{
    return a%DivideByTwo?true:false;
}

class Myclass{
        enum{MaxLen=255}; //enum in loc de define
        int a[MaxLen]={0}; //toate elementele sunt initializate cu 0;
        char *p;
        mutable size_t textLength=1; //initializare

    private:
        static int counter;
        const int id=counter;
        int nrPicior;
        int varsta;

        Myclass(const Myclass&);//pentru a face obiectele din clasa Myclass sa nu poata fi initializate cu un alt obiect din clasa Myclass
        Myclass& operator=(const Myclass&);//pentru a nu lasa obiectele din clasa Myclass sa poata fi copiate intre ele

   
    public:
        Myclass():nrPicior(0),varsta(0){}; //default constructor
        Myclass(int p, int v);
        ~Myclass(); //destructor

        void SetNrPicior(int pic);
        void SetVarsta(int v);
        int GetVarsta();
        int GetNrPicior();
        void Print();

        
 
        void length()const{
            if(parity(id)){
                textLength=strlen(p);
            }
        }
};
int Myclass::counter=0;
Myclass::Myclass(int p, int v)
{
    counter++;
    nrPicior=p;
    varsta=v;
}
void Myclass::SetNrPicior(int pic)
{
    nrPicior=pic;
}
void Myclass::SetVarsta(int v)
{
    varsta=v;
}

int Myclass::GetVarsta()
{
    return varsta;
}
int Myclass::GetNrPicior()
{
    return nrPicior;
}
void Myclass::Print()
{
    cout<<"Persoana cu id-ul "<<id<<" are nrPicior="<<nrPicior<<" si varsta="<<varsta<<endl;
}

Myclass::~Myclass()
{}

int main()
{
    Myclass pers1(41,51); //default constructor
    Myclass pers2(34,20);
    //Myclass pers2(pers1); //Myclass objects are copy-proof
    pers1.Print();
    pers1.SetNrPicior(43);
    pers1.Print();
    pers2.Print();
}