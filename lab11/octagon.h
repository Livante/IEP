class Octagon: public Figura
{
public:
    octagon(){}
    double perimetru()
    {
        Punct p1=getPunct(0);
        Punct p2=getPunct(1);
        Punct p3=getPunct(2);
        Punct p4=getPunct(3);
        Punct p5=getPunct(4);
        Punct p6=getPunct(5);
        Punct p7=getPunct(6);
        Punct p8=getPunct(7);
        double d1=sqrt((pow(((p2.getX())-p1.getX()),2))+(pow(((p2.getY())-p1.getY()),2)));
        double d2=sqrt((pow(((p3.getX())-p2.getX()),2))+(pow(((p3.getY())-p2.getY()),2)));
        double d3=sqrt((pow(((p4.getX())-p3.getX()),2))+(pow(((p4.getY())-p3.getY()),2)));
        double d4=sqrt((pow(((p5.getX())-p4.getX()),2))+(pow(((p5.getY())-p4.getY()),2)));
        double d5=sqrt((pow(((p6.getX())-p5.getX()),2))+(pow(((p6.getY())-p5.getY()),2)));
        double d6=sqrt((pow(((p7.getX())-p6.getX()),2))+(pow(((p7.getY())-p6.getY()),2)));
        double d7=sqrt((pow(((p8.getX())-p7.getX()),2))+(pow(((p8.getY())-p7.getY()),2)));
        double d8=sqrt((pow(((p1.getX())-p8.getX()),2))+(pow(((p1.getY())-p8.getY()),2)));
        return d1+d2+d3+d4+d5+d6+d7+d8;
    }
};
