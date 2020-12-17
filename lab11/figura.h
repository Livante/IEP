
class Figura
{
public:
    Figura(){}
    void addPunct(Punct p)
    {
        puncte.push_back(p);
    }
    void afisare()
    {
        for (list<Punct>::iterator i = puncte.begin(); i != puncte.end(); ++i)
            cout << *i <<", ";
        cout<<endl;
    }
    Punct getPunct(int n)
    {
        list<Punct>::iterator it = puncte.begin();
        if(n>puncte.size()-1){
            return *it;
        }
        for(int i=0; i<n; i++){
            ++it;
        }
        return *it;
    }
private:
    list<Punct>puncte;
};

