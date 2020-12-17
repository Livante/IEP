class Cerc
{
private:
    double razaCerc;
    Punct origin;

    Cerc()
    {
        razaCerc=0;
        origin=Punct(0,0);
    }
public:

    static Cerc *instanta;

    static Cerc *getInstance() {
        try{
            if (!instanta)
                instanta = new Cerc;
        }catch(int e)
        {
            cout<<"Exceptie\n";
        }
        return instanta;
    }

    void setData(double razaCerc, Punct origin){
        this->razaCerc=razaCerc;
        this->origin=origin;
    }

    double getRaza()
    {
        return this->razaCerc;
    }

    Punct getOrigin()
    {
        return this->origin;
    }

    template <typename T>
    int estePeCerc(T figura, T origineCerc, double raza)
    {
        double x=figura.getX()-origineCerc.getX();
        double y=figura.getY()-origineCerc.getY();
        double aux=pow(x,2)+pow(y,2);
        if(aux==pow(raza,2))
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void afisareCerc(){
        cout<<"Raza cercului este: "<<this->razaCerc<<" si punctul de origine: "<<this->origin<<endl;
    }

};
Cerc *Cerc::instanta = 0;
