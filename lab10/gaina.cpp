#define MAX_GAINI 30
class Gaina: public Pasare
{
public:
    Gaina(){};
    Gaina(string sound,int zbor)
    {
        if(nrGaini<MAX_GAINI)
        {
            if(zbor<10)
            {
                this->sound=sound;
                this->zbor=zbor;
                nrGaini++;
            }
            else
            {
                this->sound=sound;
                this->zbor=9;
                nrGaini++;
            }
        }
        else
        {
            this->Gaina::~Gaina();
        }
    }
    ~Gaina(){};
    string sunet()
    {
        return sound;
    }
    int zboara()
    {
        return zbor;
    }
    Papagal vanzare(Papagal p)
    {
        this->Gaina::~Gaina();
        return p;
    }

    Strut* vanzare(Strut* s)
    {
        this->Gaina::~Gaina();
        return s;
    }

    void setSunet(string sunet)
    {
        this->sound=sunet;
    }

    void setZbor(int zbor)
    {
        this->zbor=zbor;
    }

    void decrementare()
    {
        nrGaini--;
    }

    void afisare()
    {
        cout<<"Gaina spune "<<sound<<" si poate zbura "<<zbor<<"m."<<endl;
    }

private:
    string sound;
    int static nrGaini;
    int zbor;
};
