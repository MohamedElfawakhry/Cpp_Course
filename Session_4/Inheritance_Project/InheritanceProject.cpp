#include <iostream>
#include <string>
using namespace std ;

class MaterialObject
{
private:
    /* data */
public:
    MaterialObject(/* args */)
    {   cout<<"HelloMatieral"<<endl;   }
    ~MaterialObject()
    {
        cout<<"Goodbye MaterialObject"<<endl;
    }
    
    virtual void Display ( void )
    {
        cout<< "From Material Object " <<endl;
    }

};

class NonLivingThing : public MaterialObject
{
private:
    /* data */
public:
    NonLivingThing(/* args */)
    {
        cout<<"Hello NonLivingThing"<<endl;
    }
    ~NonLivingThing()
    {
        cout<<"Goodbye NonLivingThing"<<endl;
    }
    void Display(void) override
    {
        MaterialObject::Display();
        cout<< "From NonLivingThing"<<endl;
    }
};
class Rock : public NonLivingThing
{
    private :
        string Rock_Color ;
        int     Rock_SizeInInch ;
    public :
        void Rock_SetColor (string Copy_Color )
        {
            Rock_Color = Copy_Color ; 
        }
        void Rock_SetSizeInInches(int Copy_Size)
        {
            Rock_SizeInInch = Copy_Size ;
        }

        void Display(void) override
        {
            NonLivingThing::Display();
            cout<<"Rock Color : "<<Rock_Color <<endl;
            cout<<"Rock Size : "<<Rock_SizeInInch<<" Inches " <<endl;
            
        }

};
class Air : public NonLivingThing
{
    private:
        int Speed ;
        string Direction ;
    public:
        void Air_SetSpeed( int Copy_Speed )
        {
            Speed = Copy_Speed ;
        }
        void Air_SetDirection( string copy_direction )
        {
            Direction = copy_direction ;
        }
        void Display(void) override
        {
            NonLivingThing::Display();
            cout <<"Speed of Air =  "<<Speed <<" m/s"<<endl;
            cout<<"Direction of Air = "<<Direction<<endl;
        }
  
};

class LivingThings : public MaterialObject
{
private:
    bool HasBrain ;
    string DateOfBirth ;
public:
    void Set_HasBrain (bool Copy_HasBrainOrNot)
    {
        HasBrain = Copy_HasBrainOrNot ;
    }
    void LivingThing_SetDataOfBirth(string Copy_DateOfBirth)
    {
        DateOfBirth = Copy_DateOfBirth ;
    }
    void Display (void) override
    {
        MaterialObject::Display();
        cout<<"Has a brain : ";
        if(HasBrain == true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        cout<<"Date of birth is : "<<DateOfBirth<<endl;
    }
};

class plant : public LivingThings
{
    private :
        string color ;
        string Type ;
    public :

        void Plant_SetColor(string Copy_color)
        {
            color = Copy_color ;
        }
        void Plant_SetType (string copy_Type)
        {
            Type = copy_Type ;
        }
        void Display(void) override
        {
            LivingThings :: Display();
            cout <<"Color of the plant :  "<<color <<endl;
            cout<<"Type of the plant   : "<<Type<<endl;
        }
};

class Animal : public LivingThings
{
    private:
        string SkinColor ;
        int Age ;

    public:
        void Animal_SetSkinColor(string Copy_Color)
        {
            SkinColor = Copy_Color ;
        }
        void Animal_SetAge( int Copy_age )
        {
            Age = Copy_age ;
        }

        void Display(void) override
        {
            LivingThings::Display();
            cout<<"The skin Color is : "<<SkinColor <<endl;
            cout <<"The Age is : "<<Age <<endl ;
        }

};
class Reptile : public Animal
{
private:
    string Type ;
public:
    void Reptile_SetType(string Copy_Type)
    {
        Type = Copy_Type;
    }
    void Display(void) override
    {
        Animal::Display();
        cout<<"Type of Reptile is : "<<Type<<endl;
    }
};

class Mammal : public Animal
{
private:
    string HairBodyColor ;
public:
    void Mammal_SetHairBodyColor (string Copy_HairBodyColor)
    {
        HairBodyColor = Copy_HairBodyColor ;
    }
    void Display(void) override
    {
        Animal::Display();
        cout<<"Body's Hair Color is : "<<HairBodyColor<<endl;
    }
   
};
class PlatyPus : Mammal
{
private:
    /* data */
public:
    void Display (void) override
    {
        Mammal::Display();
    }
};
class Cat : Mammal
{
private:
    string Type ;
public:
    void Cat_SetType( string Copy_type)
    {
        Type = Copy_type ;
    }
    void Display (void) override
    {
        Mammal::Display();
        cout<<"Cat Type is : "<<Type << endl;
    }
};
class Dog : public Mammal
{
private:
    string Type ;
public:
    void Dog_SetType( string Copy_type)
    {
        Type = Copy_type ;
    }
    void Display (void) override
    {
        Mammal::Display();
        cout<<"Dog Type is : "<<Type << endl;
    }
};

class HumanBeing : public Mammal
{
    private:
        string Name ;
        string Address ;
    public:
        void HumanBeing_SetName(string Copy_Name)
        {
            Name = Copy_Name ;
        }
        void HumanBeing_SetAddress(string Copy_Address)
        {
            Address = Copy_Address;
        }
        void Display(void) override
        {
            Mammal::Display();
            cout<<"Name is : "<<Name<<endl;
            cout<<"Address is : "<<Address <<endl ;
        }

};
class Job : public HumanBeing
{
    private :
        string JobName ;
        int salary ;
        
    public:
        void Job_SetJobName (string Copy_JobName)
        {
            JobName = Copy_JobName ;
        }
        void Job_SetSalary( int Copy_salary)
        {
            salary = Copy_salary;
        }
        void Display(void) override
        {
            HumanBeing::Display();
            cout<<"Job Name is : "<<JobName <<endl;
            cout <<"Salary is : "<<salary<<"$"<<endl;
        }

};


int main(void)
{

    // Rock R1 ;
    // R1.Rock_SetColor("Black");
    // R1.Rock_SetSizeInInches(90);
    // R1.Display();

    // Air A1 ; 
    // A1.Air_SetDirection("North");
    // A1.Air_SetSpeed(60);
    // A1.Display();

    // plant p1 ;
    // p1.Set_HasBrain(false);
    // p1.Plant_SetColor("Green");
    // p1.Plant_SetType("Banana Tree");
    // p1.Display();

    // Reptile Re1 ;
    // Re1.Set_HasBrain(true);
    // Re1.Animal_SetAge(3);
    // Re1.Animal_SetSkinColor("Yellow");
    // Re1.Reptile_SetType("Sol7fa");
    // Re1.Display();

    Dog D1 ;
    D1.Animal_SetAge(1);
    D1.LivingThing_SetDataOfBirth("2022");
    D1.Animal_SetSkinColor("Black");
    D1.Mammal_SetHairBodyColor("Brown");
    D1.Set_HasBrain(true);
    D1.Dog_SetType("German sheparred");
    D1.Display();
    cout<<"---------------------------------------"<<endl;

    Job Ken ;
    Ken.Animal_SetAge(30);
    Ken.Animal_SetSkinColor("White");
    Ken.Set_HasBrain(true);
    Ken.LivingThing_SetDataOfBirth("1/9/1993");
    Ken.Mammal_SetHairBodyColor("Black");
    Ken.HumanBeing_SetName("Ken");
    Ken.HumanBeing_SetAddress("USA");
    Ken.Job_SetJobName("Dentist");
    Ken.Job_SetSalary(3000);
    Ken.Display();
    cout<<"---------------------------------------"<<endl;
    Job Flo ;
    Flo.Animal_SetAge(25);
    Flo.Animal_SetSkinColor("Black");
    Flo.Set_HasBrain(true);
    Flo.LivingThing_SetDataOfBirth("1/3/1998");
    Flo.Mammal_SetHairBodyColor("Black");
    Flo.HumanBeing_SetName("Flo");
    Flo.HumanBeing_SetAddress("Brazil");
    Flo.Job_SetJobName("Shopkeeper");
    Flo.Job_SetSalary(1300);
    Flo.Display();
    cout<<"---------------------------------------"<<endl;
    Job Beth ;
    Beth.Animal_SetAge(20);
    Beth.Animal_SetSkinColor("Blonde");
    Beth.Set_HasBrain(true);
    Beth.LivingThing_SetDataOfBirth("10/2/2003");
    Beth.Mammal_SetHairBodyColor("Black");
    Beth.HumanBeing_SetName("Beth");
    Beth.HumanBeing_SetAddress("UK");
    Beth.Job_SetJobName("Artist");
    Beth.Job_SetSalary(2000);
    Beth.Display();

    return 0 ;
}


