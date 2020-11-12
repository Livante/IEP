#include <iostream>
using namespace std;

class Box{
    //clasa abstracta -> destructor virtual.
    public:
    virtual double getVolume()=0;
    Box(){};
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

    protected:    
        double length;
        double breadth;
        double height;
};

class RectBox: public Box{
    public:
    double getVolume(){
        return length*breadth*height;
    }
};

class CircBox: public Box{
    public:
    double getVolume(){
        return length*height*height*3.1415;
    }
};

int main(void){
    RectBox box1;
    CircBox box2;

    box1.setBreadth(2.1);
    box1.setHeigth(2.0);
    box1.setLength(4.0);
    
    box2.setLength(1.0);
    box2.setHeigth(3.3);
    box2.setBreadth(0);
    
    RectBox *box3;
    box3=&box1;
    CircBox *box4;
    box4=&box2;

    cout << "Volumul cutiei 3: " << box3->getVolume();
    cout << "Volumul cutiei 4: " << box4->getVolume(); 

    delete box3;
    delete box4;

    return 0;
}