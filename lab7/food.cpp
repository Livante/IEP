#include <iostream>
using namespace std;

/*Items in this program:
Item 21: returning new object, not a reference object
Item 22: data members are private. The only way to access their values is through Set and Get functions for each member. In this case, all data members are readable and writable.

*/
class Food
{
    public:
    Food(){};
    Food(double carb, double fat,double protein)
    {
        this->carb=carb;
        this->fat=fat;
        this->protein=protein;
    }
    virtual ~Food(){};

    //Setters
    void setCarb(double c)
    {
        carb=c;
    }
    void setFat(double f)
    {
        fat=f;
    }
    void setProtein(double p)
    {
        protein=p;
    }
    //End of setters

    //Getters
    double getCarbs()
    {
        return this->carb;
    }
    double getFats()
    {
        return this->fat;
    }
    double getProteins()
    {
        return this->protein;
    }
    //End of getters


    Food& operator=(const Food& f)
    {
        carb=f.carb;
        fat=f.fat;
        protein=f.protein;
        return *this;
    }

    const Food operator+(Food& lf)const;

    void display()
    {
        cout<<"Nutritional values: Carbs: "<<carb<<". Fats: "<<fat<<". Proteins: "<<protein<<endl;
    }
    private:
        //values per 100g
        double carb;
        double fat;
        double protein;
};
inline const Food operator+(Food& lf, Food& rf)
{
    //Item 21: returning new object, not a reference object
    return Food(
        ((lf.getCarbs()+rf.getCarbs())/2),
        ((lf.getFats()+rf.getFats())/2),
        ((lf.getProteins()+rf.getProteins())/2));
}
int main()
{
    Food rice(77,0.8,7);
    Food chicken(0,5.1,20);
    Food Oat(56.1,5.1,15.9);
    cout<<"Oat: ";
    Oat.display();
    cout<<"rice: ";
    rice.display();
    cout<<"chicken: ";
    chicken.display();
    
    Food aux;
    aux=rice+chicken;
    cout<<"chicken + rice: ";
    aux.display();
}
