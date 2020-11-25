#include <iostream>
using namespace std;

/*
In this program, We've implemented item 24
*/

class Imaginary
{
    public:
    Imaginary(){};
    Imaginary(string name,double r,double i)
    {
        this->name=name;
        this->r=r;
        this->i=i;
    }
    Imaginary(double r,double i)
    {
        this->name="";
        this->r=r;
        this->i=i;
    }
    Imaginary(double r)
    {
        //This constructor is called by the compiler when we give an argument of type double or int to the function add, so both arguments are of type Imaginary object
        this->name="";
        this->r=r;
        this->i=0;
    }


    //Getters and Setters
    void setI(double i)
    {
        this->i=i;
    }
    void setR(double r)
    {
        this->r=r;
    }
    void setName(string name)
    {
        this->name=name;
    }

    double getI()
    {
        return this->i;
    }
    double getR()
    {
        return this->r;
    }
    string getName()
    {
        return this->name;
    }
    //End of Getters and Setters

    Imaginary& operator=(const Imaginary& a)
    {
        r=a.r;
        i=a.i;
        return *this;
    }

    void display()
    {
        if(name!="")
        {
                if(getI()<0)
            {
                cout<<name<<"="<<getR()<<getI()<<"i"<<endl;
            }
            else
            {
                if(getI()==0)
                    cout<<name<<"="<<getR()<<endl;
                else
                {
                    cout<<name<<"="<<getR()<<"+"<<getI()<<"i"<<endl;
                }
            }
        }
        else
        {
                if(getI()<0)
            {
                cout<<getR()<<getI()<<"i"<<endl;
            }
            else
            {
                if(getI()==0)
                    cout<<getR()<<endl;
                else
                {
                    cout<<getR()<<"+"<<getI()<<"i"<<endl;
                }
            }
        }
    }

    private:
        string name;
        double r;
        double i;
};
Imaginary add(Imaginary a,Imaginary b)
    {
        return Imaginary((a.getR()+b.getR()),(a.getI()+b.getI()));
    }
int main()
{
    Imaginary a("a",1,5);
    Imaginary b("b",4,-2);
    a.display();
    b.display();
    Imaginary c;
    c.setName("c");
    c=add(a,b);
    c.display();
    Imaginary d;
    d=add(7,b);
    d.setName("d");
    //We can use the function add even with an integer or double instead of an object of type Imaginary. 
    //That is because the compiler calls the constructor of Imaginary with a single argument ( Imaginary(double r) )
    d.display();

    /*More testing:
    cout<<endl;
    Imaginary aux(0,1);
    aux.display();
    Imaginary e;
    e=add(0,7);
    e.display();*/
}