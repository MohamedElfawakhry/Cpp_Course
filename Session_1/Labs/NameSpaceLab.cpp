#include <iostream>

using namespace std;

namespace circle_namespace
{
    int Area ;
    void Area_cal(int Loc_diameter )
    {
        Area = 2*3.14 * Loc_diameter ;
    }
    void Area_print(void)
    {
        cout <<"Circle Area =" << Area << endl ;
    }
}
namespace triangle_namespace
{
    int Area ;
    void Area_cal(int Loc_base , int Loc_highet )
    {
        Area = 0.5 *Loc_base * Loc_highet ;
    }
    void Area_print(void)
    {
        cout <<"Triangle Area =" << Area << endl ;
    }
}
namespace rectangle_namespace
{
    int Area ;
    void Area_cal(int Loc_base , int Loc_highet )
    {
        Area = Loc_base * Loc_highet ;
    }
    void Area_print(void)
    {
        cout <<"Rectangle Area =" << Area << endl ;
    }
}
int main()
{
    int circle_di , x , y ;
    cout<<"Enter Circle diamete "<<endl;
    cin >>circle_di ;
    cout <<"Enter x&y for Triangle and Rectangle "<<endl;
    cin >> x >> y;
    // for circle
    circle_namespace::Area_cal(circle_di);
    circle_namespace::Area_print();
    //for Triangle
    triangle_namespace::Area_cal(x ,y);
    triangle_namespace::Area_print();
    
    rectangle_namespace::Area_cal(x , y);
    rectangle_namespace::Area_print();
    
    return 0 ;
}