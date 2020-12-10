class Strut: public Pasare
{
    static Strut *instance;
    string sound;
    int zbor;
    Strut(string sound,int zbor)
    {
        this->sound=sound;
        this->zbor=zbor;
    }

public:
    static Strut *getInstance(string sound,int zbor)
    {
        if (!instance)
            instance = new Strut(sound,zbor);
        return instance;
    }

    string sunet()
    {
        return sound;
    }
    int zboara()
    {
        return zbor;
    }
    void afisare()
    {
        cout<<"Strutul spune "<<sound<<" si poate zbura "<<zbor<<"m."<<endl;
    }

    void setSunet(string sunet)
    {
        this->sound=sound;
    }
    void setZbor(int zbor)
    {
        this->zbor=zbor;
    }

};
