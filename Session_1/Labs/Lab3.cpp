#include <iostream>
#include <string>
 
using namespace std ;
template <typename T>

T sum1 ( T a , T b)
{

    return (a+b);
}

int main(void)
{

    cout<< sum1<int>(3 , 5) << endl ;
    cout<< sum1<float>(3.5 , 2.25) << endl ;
    cout<< sum1<string>("Mohamed" , "Khaled") << endl ;
    cout<< sum1<double>(3.566 , 1) << endl ;
    

    return 0 ;
}