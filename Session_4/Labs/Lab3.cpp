#include <iostream>
#include <string>

using namespace std ;

class person
{
    private:
        string name ;
        int age ;
        bool type ;

    public :
    person( string name_local , int age_local ,bool type_local):name(name_local),age(age_local),type(type_local)
        {
        }
        person()
        {
        cout<<"Hello person"<<endl;
        }
        ~person()
        {
            cout<<"goodbye person"<<endl;
        }

        void Set_Person_Name(string Copy_name)
        {
            name = Copy_name ;
        }

        void Set_Person_Age(int Copy_age)
        {
            age = Copy_age ;
        }

        void Set_Person_Type ( bool Copy_type )
        {
            type = Copy_type ;
        }
        virtual void Display(void)
        {
            cout<<"Name : " << name << endl;
            cout<<"Age : " << age << endl;
            cout<<"Type : " << type << endl;

        }

};
/********************************************/
class student: virtual public person
{  
    private:
        float GPA ;
        int  Level ;

    public:
        student(string name_local , int age_local ,bool type_local ,float Copy_GPA , int Copy_Level): GPA(Copy_GPA),Level(Copy_Level),person(name_local,age_local,type_local)
        {
            GPA = Copy_GPA ;
            Level = Copy_Level;

        }
        student()
        {
        cout<<"Hello person"<<endl;

        }
        ~student()
        {
            cout<<"goodbye student"<<endl;
        }
        void Set_Student_GPA(float Copy_GPA)
        {
            GPA = Copy_GPA ;
        }
        void Set_Student_Level(int Copy_Level)
        {
            Level = Copy_Level;
        }
        virtual void Display(void) override
        {
            person::Display();
            cout<<"GPA : " << GPA << endl;
            cout<<"Level : " << Level << endl;
        }

};
class Athlete : public student
{
    private :
        string game ;
        int Number_inClass ;

    public:
        Athlete()
        {

        }
        Athlete(string Copy_GameName , int Copy_Number ,string name_local , int age_local ,bool type_local ,float Copy_GPA , int Copy_Level ):
        game(Copy_GameName) , Number_inClass(Copy_Number) , student(name_local ,age_local ,type_local,Copy_GPA ,Copy_Level )
        {

        }
        void Set_Game(string Copy_GameName)
        {
            game = Copy_GameName ;
        }
        void Set_NumberInClass( int Copy_Number)
        {
            Number_inClass = Copy_Number ;
        }

        void Display(void) override
        {
            student ::Display();
            cout <<"Game Name = "<<game<<endl;
            cout <<"Number in class = "<<Number_inClass <<endl;
        }
};
/********************************************************/
class emp : public person
{
    private:
        int salary ;
        
    public:
    emp(){

    }
        void Set_Employee_salary(int Copy_salary )
        {
            salary = Copy_salary ;
        }
        void Display(void) override
        {
            person :: Display();
            cout<<"Salary = "<<salary<<endl ;
        }
};
class employee : virtual public  person
{
    private :
        int salary ;
        string job_name;
    public :
        void Set_Employee_Salary (int salary_local )
        {
            salary = salary_local ;
        }
        void Set_Employee_JobName( string Copy_jobname)
        {
            job_name = Copy_jobname ;
        }
        void Display()
        {
            person::Display();
            cout<<"salary : " << salary << endl;
            cout<<"job name : " << job_name << endl;
        }
};

class multiTask_student : public student , public employee
{

    private:
        int work_hour ;
        int study_hour ;
    public:
    void Set_Study_hour (int study_hour_local)
    {
        study_hour = study_hour_local ;
    }
    void Set_work_hour (int work_hour_local)
    {
        work_hour = work_hour_local ;
    }
    void Display(void)
    {
        //student::Display();
        employee::Display();
        cout<<"work_hour : " << work_hour << endl;
        cout<<"study_hour  : " << study_hour << endl;
    }
};

class athlete : public multiTask_student
{
    private :
        string game ;
        int Training_hours ;

    public:
        
        void Set_Game(string Copy_GameName)
        {
            game = Copy_GameName ;
        }
        void Set_TrainingHours( int Copy_Number)
        {
            Training_hours = Copy_Number ;
        }

        void Display(void) 
        {
            multiTask_student ::Display();
            cout <<"Game Name = "<<game<<endl;
            cout <<"Training Hours = "<<Training_hours <<endl;
        }
        
}; 
int main(void)
{

    athlete a1;
    a1.Set_Student_GPA(3.8);
    a1.Set_Student_Level(300);
    a1.Set_Employee_JobName("QA");
    a1.Set_Employee_Salary(1000);
    a1.Set_work_hour(5);
    a1.Set_Study_hour(5);
    a1.Set_Person_Name("Mohamed");
    a1.Set_Person_Age(25);
    a1.Set_Person_Type(1);
    a1.Set_Game("Tennis");
    a1.Set_TrainingHours(1);
    a1.Display();
    
    // multiTask_student s1;
    // s1.Set_Student_GPA(3.8);
    // s1.Set_Student_Level(300);
    // s1.Set_Employee_JobName("QA");
    // s1.Set_Employee_Salary(1000);
    // s1.Set_work_hour(5);
    // s1.Set_Study_hour(5);
    // s1.Set_Person_Name("Mohamed");
    // s1.Set_Person_Age(25);
    // s1.Set_Person_Type(1);
    
    // s1.Display();
    


    // person p1 ;
    // p1.Set_Person_Name("Mohamed");
    // p1.Set_Person_Age(25);
    // p1.Set_Person_Type(true);
    // p1.Display();
   // student s1("Abdelrahman",25,true,2.5,300) ;
    // s1.Set_Person_Name("Abdelrahman");
    // s1.Set_Person_Age(25);
    // s1.Set_Person_Type(true);
    // s1.Set_Student_GPA(2.5);
    // s1.Set_Student_Level(300);
   // s1.Display();
   // cout<<"--------------"<<endl;
   // Athlete A1("Football",1,"Mohamed",20,true , 3.9 , 400  ) ;
    // A1.Set_Person_Name("Mohamed");
    // A1.Set_Person_Age(20);
    // A1.Set_Person_Type(true);
    // A1.Set_Student_GPA(3.8);
    // A1.Set_Student_Level(300);
    // A1.Set_Game("Football");
    // A1.Set_NumberInClass(1);
    //A1.Display();
    //cout<<"--------------"<<endl;
    // emp E1 ;
    // E1.Set_Person_Name("Nader");
    // E1.Set_Person_Age(40);
    // E1.Set_Person_Type(1);
    // E1.Set_Employee_salary(10000);
    // E1.Display();


    return 0;
}