class Punct
{
public:
    Punct(){};
    Punct(double x, double y)
    {
        this->x=x;
        this->y=y;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }

    void setX(double x)
    {
        this->x=x;
    }
    void setY(double y)
    {
        this->y=y;
    }

    friend ostream& operator<<(ostream& os, const Punct& p);
private:
    double x;
    double y;
};

ostream& operator<<(ostream& os, const Punct& p)
{
    os<<"("<<p.x<<","<<p.y<<"); ";
    return os;
}
