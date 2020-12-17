class Triunghi: public Figura
{
public:
    Triunghi(){}
    double perimetru()
    {
        Punct p1=getPunct(0);
        Punct p2=getPunct(1);
        Punct p3=getPunct(2);
        double d1=sqrt((pow(((p2.getX())-p1.getX()),2))+(pow(((p2.getY())-p1.getY()),2)));
        double d2=sqrt((pow(((p3.getX())-p2.getX()),2))+(pow(((p3.getY())-p2.getY()),2)));
        double d3=sqrt((pow(((p1.getX())-p3.getX()),2))+(pow(((p1.getY())-p3.getY()),2)));
        return d1+d2+d3;
    }
};
