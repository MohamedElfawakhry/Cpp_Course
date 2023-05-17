#include <iostream>
#include <string>

using namespace std; 

struct rectangle
{
    int width ;
    int height ;
    
    int area()
    {
        return width * height ;
    }
    void print()
    {
        cout<<"Rectrangle: "<<width << " " <<height <<endl;
    }
};

int main()
{

    rectangle r1 ;
    r1.width = 5 ;
    r1.height = 10 ;
    cout <<"Area: " << r1.area()<<endl;
    r1.print();
    return 0 ;
}