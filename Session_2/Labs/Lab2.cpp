#include <iostream>
#include <string>

using namespace std; 

void fun(int & a)
{

    a++ ;
}

int main()
{

    int x = 5 ;
    int y = 10 ;
    int& ref = x ;
    cout << "ref points to "<< ref << endl;
    ref = y ;
    cout << "ref points to "<< ref << endl;

    cout <<"x = "<<x<<endl ;

    cout << "y = "<< y << endl;
    fun(y);
    cout << "y = "<< y << endl;
    cout <<"x = "<<x<<endl ;
    cout << "ref points to "<< ref << endl;

    return 0 ;
}