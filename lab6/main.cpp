#include <iostream>
using namespace std;

class Ceas{
    protected:
        int ora;
        int minut;

    public:
        Ceas( int o, int m){
            ora=o;
            minut=m;
        }

        Ceas();
        ~Ceas(){};

        void afis(){
            cout<<"ora: "<<ora<<" minutul: "<<minut<<"\n";
        }
};

class CeasPerf: public Ceas{
    private:
        Ceas *ceas;

    protected:
        int secunda;

    public:

        CeasPerf&
        operator=(const CeasPerf& var)
        {
            delete ceas;
            ceas=new Ceas(*var.ceas);
            return *this;
        }

        CeasPerf(int o, int m, int s): Ceas(o,m)
        {   
            secunda=s;
        }

        ~CeasPerf(){};

        void afis()
        {
            cout <<"ora: "<<ora<<" minutul: "<<minut <<" secunda: "<<secunda<<"\n";
        }
};

int main(void){

    Ceas ceas1(11,2);
    ceas1.afis();
    ceas1=ceas1; //asignare la sine
    ceas1.afis();

    CeasPerf ceas2(12,12,12);
    ceas2.afis();

    ceas1=ceas2;
    ceas1.afis();
    ceas1=ceas1;
    ceas1.afis();
    return 0;
}