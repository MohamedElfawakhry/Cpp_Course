#include <iostream>
#include <string>
using namespace std ;
template <typename NewType> 
NewType  SumTwoTowns (NewType T1 , NewType T2 )
{
    return T1 + T2 ;
}
template <typename NewType1> 
NewType1  SumThreeTowns (NewType1 T1 , NewType1 T2 , NewType1 T3 )
{
    return T1 + T2 + T3 ;
}

namespace Mansoura
{
    namespace A
    {
        int peopleNum = 0 ;
        int familiesNum = 0 ;
        int workerNum = 0 ;
        int studentsNum = 0;

        void NumEdit(void)
        {
            cout<<"Enter Number of people in Town A = ";
            cin>>peopleNum ;
            cout<<"Enter Number of families in Town A = ";
            cin>>familiesNum ;
            cout<<"Enter Number of workers in Town A = ";
            cin>>workerNum ;
            cout<<"Enter Number of students in Town A = ";
            cin>>studentsNum ;
        }
        
        void NumRemove ( int* Type )
        {
            *Type = 0 ;
        }

        void PrintTownStatus (void)
        {
            cout << "Number of people in Town A =  "<<peopleNum << endl ;
            cout << "Number of families in Town A =  "<<familiesNum << endl ;
            cout << "Number of workers in Town A =  "<<workerNum << endl ;
            cout << "Number of students in Town A =  "<<studentsNum << endl ;

        }

    }
    namespace B
    {
        int peopleNum = 0 ;
        int familiesNum = 0 ;
        int workerNum = 0 ;
        int studentsNum = 0;

        void NumEdit(void)
        {
            cout<<"Enter Number of people in Town B = ";
            cin>>peopleNum ;
            cout<<"Enter Number of families in Town B = ";
            cin>>familiesNum ;
            cout<<"Enter Number of workers in Town B = ";
            cin>>workerNum ;
            cout<<"Enter Number of students in Town B = ";
            cin>>studentsNum ;
        }
        
        void NumRemove ( int* Type )
        {
            *Type = 0 ;
        }

        void PrintTownStatus (void)
        {
            cout << "Number of people in Town B =  "<<peopleNum << endl ;
            cout << "Number of families in Town B =  "<<familiesNum << endl ;
            cout << "Number of workers in Town B =  "<<workerNum << endl ;
            cout << "Number of students in Town B =  "<<studentsNum << endl ;

        }
    }
    namespace C
    {
        int peopleNum = 0 ;
        int familiesNum = 0 ;
        int workerNum = 0 ;
        int studentsNum = 0;

        void NumEdit(void)
        {
            cout<<"Enter Number of people in Town C = ";
            cin>>peopleNum ;
            cout<<"Enter Number of families in Town C = ";
            cin>>familiesNum ;
            cout<<"Enter Number of workers in Town C = ";
            cin>>workerNum ;
            cout<<"Enter Number of students in Town C = ";
            cin>>studentsNum ;
        }
        
        void NumRemove ( int* Type )
        {
            *Type = 0 ;
        }

        void PrintTownStatus (void)
        {
            cout << "Number of people in Town C =  "<<peopleNum << endl ;
            cout << "Number of families in Town C =  "<<familiesNum << endl ;
            cout << "Number of workers in Town C =  "<<workerNum << endl ;
            cout << "Number of students in Town C =  "<<studentsNum << endl ;

        }
    }
}


int main(void)
{

    Mansoura::A::NumEdit();
    Mansoura::B::NumEdit();
    Mansoura::C::NumEdit();
    Mansoura::A:: PrintTownStatus();
    Mansoura::B::PrintTownStatus();
    Mansoura::C::PrintTownStatus();

    Mansoura::C::NumRemove(&Mansoura::C::studentsNum);
    int sum1 = SumTwoTowns<int>(Mansoura::A::studentsNum , Mansoura::B::studentsNum);
    cout <<"Number of students in Town A & B = "<<sum1<<endl ;
    sum1 = SumThreeTowns<int>(Mansoura::A::studentsNum , Mansoura::B::studentsNum,Mansoura::C::studentsNum);
    cout <<"Number of students in Town A & B & C = "<<sum1 ;

    return 0 ;
}