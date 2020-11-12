#include <iostream>
using namespace std;

class Box{
    //clasa abstracta -> destructor virtual.
    public:
    virtual double getVolume()=0;
    Box(){};
    Box(double length, double breadth,double height)
    {
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    virtual ~Box(){};

    void setHeigth(double h){
        height=h;
    }

    void setLength(double l){
        length=l;
    }

    void setBreadth(double b){
        breadth=b;
    }

    Box& operator=(const Box& b)
    {
        length=b.length;
        breadth=b.breadth;
        height=b.height;
        return *this;
    }

    protected:
        double length;
        double breadth;
        double height;
};

class RectBox: public Box{
    public:
    RectBox():Box(){}
    RectBox(double length, double breadth,double height,double sides):Box(length,breadth,height)
    {
        this->sides=sides;
    }

    double getVolume(){
        return length*breadth*height;
    }

    RectBox& operator=(const RectBox& b)
    {
        Box::operator=(b);
        sides=b.sides;
        return *this;
    }

    void setSides(int s){
        sides=s;
    }

    void display()
    {
        cout<<"RectBox: length->"<<length<<";   breadth->"<<breadth<<";   height->"<<height<<";   sides->"<<sides<<endl;
    }
    protected:
        int sides;
};

class CircBox: public Box{
    public:
    double getVolume(){
        return length*height*height*3.1415;
    }
    void display()
    {
        cout<<"CircBox: length->"<<length<<";   breadth->"<<breadth<<";   height->"<<height<<endl;
    }
};

int main(void){
    RectBox box1;
    CircBox box2;

    box1.setBreadth(2.1);
    box1.setHeigth(2.0);
    box1.setLength(4.0);
    box1.setSides(8);

    box2.setLength(1.0);
    box2.setHeigth(3.3);
    box2.setBreadth(0);

    RectBox *box3;
    box3=&box1;
    CircBox *box4;
    box4=&box2;

    RectBox box5;

    box5=box1;

    cout<<"Box1: ";(&box1)->display();
    cout <<"Volumul cutiei 1: " << (&box1)->getVolume()<<endl;
    cout<<endl<<"Box2: ";(&box2)->display();
    cout <<"Volumul cutiei 2: " << (&box2)->getVolume()<<endl;
    cout<<endl<<"Box3: ";box3->display();
    cout <<"Volumul cutiei 3: " << box3->getVolume()<<endl;
    cout<<endl<<"Box4: ";box4->display();
    cout <<"Volumul cutiei 4: " << box4->getVolume()<<endl;
    cout<<endl<<"Box5: ";(&box5)->display();
    cout<<"Volumul cutiei 5: " << (&box5)->getVolume()<<endl<<endl<<endl;

    cout<<endl<<endl;

    box1.setBreadth(7.1);
    box1.setHeigth(28.0);
    box1.setLength(55.0);

    box5.setBreadth(5.1);
    box5.setHeigth(68.0);
    box5.setLength(1.0);

    //Cele 2 cutii sunt 2 obiecte diferite

    cout<<"Box1: ";(&box1)->display();
    cout<<"Box5: ";(&box5)->display();
    /*cout << "Volumul cutiei 1: " << (&box1)->getVolume()<<endl;
    cout << "Volumul cutiei 5: " << (&box5)->getVolume()<<endl;*/

    delete box3;
    delete box4;

    return 0;
}
