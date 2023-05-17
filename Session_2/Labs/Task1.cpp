#include <iostream>
#include <string>

using namespace std ;


class School
{
    private:
    string name ;
    int Max_Student ;
    int Students_Num = 0 ;
    int Teacher_Num = 0 ;
    public:
    School():Max_Student(0),Students_Num(0), Teacher_Num(0)
    {
        // Max_Student = 0 ;
        // Students_Num = 0 ; 
        // Teacher_Num = 0 ;
    }
    void SetName(string Copy_Name )
    {
        name = Copy_Name ;
    }
    void SetMaxStudentInSchool( int Copy_MaxStudent )
    {
        if(Copy_MaxStudent > 0)
        {
            Max_Student = Copy_MaxStudent ;
        }
        else
        {
            cout <<"Invalid Number"<<endl ;
        }
    }
    void AddTeacher()
    {
        if (Teacher_Num > 100 )
        {
            cout <<" You Cant add more teachers "<<endl;
        }
        else
        {
            Teacher_Num++;
        }
    }
    void AddStudent()
    {
        if (Students_Num > Max_Student )
        {
            cout <<" You Cant add more students "<<endl;
        }
        else
        {
            Students_Num++;
        }
    }
    void ShowData(void)
    {
        cout<<"School Name = "<<name<<endl;
        cout<<"Max Number can be in school = "<<Max_Student <<endl;
        cout<<"Number of teachers in school = "<<Teacher_Num<<endl;
        cout<<"Number of students in school = "<<Students_Num<<endl;
        
    }

};

int main(void)
{

    School SLS ;
    string School_Name ;
    cout<<"Enter School Name : ";
    getline(cin ,School_Name );
    //cin>>School_Name ;
    SLS.SetName(School_Name);
    SLS.SetMaxStudentInSchool(1000);
    SLS.AddTeacher();
    SLS.AddTeacher();
    SLS.AddTeacher();
    SLS.AddTeacher();
    SLS.AddTeacher();
    for(int i = 0 ; i< 170 ; i++)
    SLS.AddStudent();

    SLS.ShowData();
    /*********************************************************/
    School MSL ;
    School_Name ;
    cout<<"Enter School Name : ";
    getline(cin ,School_Name );
    //cin>>School_Name ;
    MSL.SetName(School_Name);
    MSL.SetMaxStudentInSchool(500);
    
    for(int i = 0 ; i< 70 ; i++)
    MSL.AddTeacher();
    for(int i = 0 ; i< 250 ; i++)
    MSL.AddStudent();

    MSL.ShowData();



    return 0 ;
}