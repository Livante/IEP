class Papagal: public Pasare
{
public:
    Papagal()
    {
        this->sound="";
        this->zbor=0;
    }
    Papagal(string sound,int zbor)
    {
        this->sound=sound;
        this->zbor=zbor;
    }
    Papagal(string sound,int zbor,string cuv)
    {
        this->sound=sound;
        this->zbor=zbor;
        cuvinte.push_back(cuv);
    }
    void addCuvant(string cuv)
    {
        cuvinte.push_back(cuv);
    }
    void afisareCuvinte()
    {
        cout<<"Cuvintele stiute sunt: ";
        for (list<string>::iterator i = cuvinte.begin(); i != cuvinte.end(); ++i)
            cout << *i <<", ";
        cout<<endl;
    }
    string sunet()
    {
        return sound;
    }
    int zboara()
    {
        return zbor;
    }

    void setSunet(string sunet)
    {
        this->sound=sound;
    }
    void setZbor(int zbor)
    {
        this->zbor=zbor;
    }

    void afisare()
    {
        cout<<"papagalul spune "<<sound<<", poate zbura "<<zbor<<"m si cunoaste cuvintele: ";
        for (list<string>::iterator i = cuvinte.begin(); i != cuvinte.end(); ++i)
            cout << *i <<", ";
        cout<<endl;
    }
private:
    list<string>cuvinte;
    string sound;
    int zbor;
};
