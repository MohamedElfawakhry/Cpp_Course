#include <iostream>
#include <string>

using namespace std ;

class shape
{
    
    public :
        virtual double area() = 0 ;
        virtual double perimeter() = 0 ;
        
};

class Circle : public shape
{
    private :
    int diameter ;
    double ar ;
    double per ;
    public:
    Circle()
    {           }
    void Circle_SetDiameter ( double Copy_dia)
    {
        diameter = Copy_dia ;
    }
    double area() 
    {
        ar = (5*diameter) ;
        return ar ;
    }
    double perimeter() 
    {
        per = (2*diameter) ;
        return per ;
    }
    
};
class Cube : public shape
{
    private :
    int x ;
    double ar ;
    double per ;
    public:
    Cube()
    {           }
    void Cube_SetDiameter ( double Copy_x)
    {
        x = Copy_x ;
    }
    double area() 
    {
        ar = (12*x) ;
        return ar ;
    }
    double perimeter() 
    {
        per = (5*x) ;
        return per ;
    }
    
};
int main()
{
    Circle C1 ;
    C1.Circle_SetDiameter(2);
     cout<<"Area of circle = "<<C1.area()<<endl ;
    cout<<"Perimeter of circle = "<<C1.perimeter()<<endl;
    Cube x ;
    x.Cube_SetDiameter(3);
     cout<<"Area of Cube = "<<x.area()<<endl ;
    cout<<"Perimeter of Cube = "<<x.perimeter()<<endl;
    return 0 ;
}