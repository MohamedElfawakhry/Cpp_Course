#include <iostream>
//#include <string>

using namespace std ;

template <typename T1 , typename T2>

void print(T1 a  , T2 b)
{
    cout << a << " " << b << endl;
}

int main(void)
{   

    int n ;
    cout<<"Enter Size of the array ";
    cin >> n ;

    int *arr = new int[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = i*2 ;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"arr["<<i+1<<"] = "<<arr[i]<<endl ;
    }
    delete[] arr ;

    /*int* ptr = new int ;
    *ptr = 42 ;

    cout << *ptr <<endl ;
    delete ptr ;*/

  /*  print<string , int>("Hello" , 42 );
    print(3.14 , true );
    print('C','R');*/

    /*cout <<max1<int>(3,7)<<endl;
    cout <<max1<float>(3.5,1.2)<<endl;
    cout <<max1(3.0003,3.0004)<<endl;*/

   /* bool a = 20 ;
    bool b = 0 ;
    bool c = -100;

    cout<<"a= "<< a <<" "<<"b= "<< b <<" "<<"c= "<< c <<" " ;*/
    /*string name;
    cout<<"Enter Your name"<<endl;


    //cin>>name ;
    getline(cin , name);

    if(name == "mohamed khaled")
    {
        cout<<"Your Name is " << name <<endl;
    }
    else
    {
        cout<<"Invalid Name"<<endl;
    }*/


    return 0 ;
}