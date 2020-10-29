#include <iostream>
#include <string>
using namespace std;

class Myclass{
        enum{MaxLen=255}; //enum in loc de define
        int a[MaxLen]={0}; //toate elementele sunt initializate cu 0;
        const int DivideByTwo=2;//constante in loc de define
        char *p='a'; //initializare 
        mutable std::size_t textLength=1; //initializare

    private:
        int nrPicior;
        int varsta;
   
    public:
        Myclass::Myclass(); //default constructor
        Myclass::Myclass(const std::int& nrPicior, const std::int& varsta)
            :nrPicior(nrPicior),
            varsta(varsta)
            {}

        ~Myclass(); //destructor


        template<typename T>//folosirea metodelor generice si a functiilor inline
        inline void parity(const T& a)
        {
            f(a%DivideByTwo?1:0);
        }
 
        std::size_t Myclass::length()const{
            if(parity(2)){
                textLength=std::strlen(p);
            }
        }


    int main(){
        Myclass pers1=new Myclass(41,51); //default constructor
        Myclass pers2(pers1); //copy constructor
        pers2=pers1; //copy assignment operator
    }

};