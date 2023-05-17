#include <iostream>
#include <string>

using namespace std ;

#define ADMIN_USERNAME     (string)"Mohamed"
#define ADMIN_PASSWORD      1234
#define FAIL                0
#define PASS                1
#define RESERVED            0
#define NOTRESERVED         1
#define MAX_NUMBER_OF_PATRIENTS 50
int LogIn_Func(void)
{
    string EnteredUsername ;
    int EnteredPassword ;
    int UserNameState = FAIL ;
    int PasswordState = FAIL ;
    cout <<"Enter Admin Username : "<<endl;
    cin >> EnteredUsername ;
    if(EnteredUsername == ADMIN_USERNAME )
        UserNameState = PASS ; 
    
    if(UserNameState == PASS )
    {
        cout <<"Enter Admin Password : "<<endl;
        cin >> EnteredPassword ;
        if(EnteredPassword == ADMIN_PASSWORD )
            PasswordState = PASS ;

    }
    return (UserNameState && PasswordState);
}

typedef struct patient 
{
    string Name ;
    int Id ;
    int Age ;
    string Gender ;

}Patient_t ;

class Hospital
{
private:
    int Class_intPrivNumberOfPatients=0 ;
    Patient_t Class_structPrivPatientsData [ 50 ] ;
    const string Class_AStringAppointments [6] = { "12:00" , "1:00" , "2:00" , "3:00","4:00","5:00"} ;
    int Class_AAppointments [6] = {NOTRESERVED,NOTRESERVED,NOTRESERVED,NOTRESERVED,NOTRESERVED, NOTRESERVED};
public:
    /* constructor */
    Hospital()
    {
        Class_intPrivNumberOfPatients = 10 ;
        Class_AAppointments[0] = RESERVED ;
    }
    /* constructor overloading*/
    Hospital(int a , int b)
    {
        Class_intPrivNumberOfPatients = a ;
        for(int i = 0 ; i < b ; i++)
        Class_AAppointments[i] = RESERVED ;
    }
    /* Destructor */
    ~Hospital()
    {
        cout<<" Good Bye ";
    } //
    Hospital operator --()
    {
        int local = Class_intPrivNumberOfPatients ;
        --local ;
        return Hospital(local ,0 );
    }
    Hospital operator ++()
    {
        int local = Class_intPrivNumberOfPatients ;
        ++local ;
        return Hospital(local ,0 );
    }
    Hospital operator + (Hospital input)
    {
        int Local_NumberOfPatients = Class_intPrivNumberOfPatients + input.Class_intPrivNumberOfPatients ;
        return Hospital(Local_NumberOfPatients , 0);
    }
    Hospital operator * (Hospital input)
    {
        int Local_NumberOfPatients = Class_intPrivNumberOfPatients * input.Class_intPrivNumberOfPatients ;
        return Hospital(Local_NumberOfPatients , 0);
    }
    Hospital operator / (Hospital input)
    {
        int Local_NumberOfPatients = Class_intPrivNumberOfPatients / input.Class_intPrivNumberOfPatients ;
        return Hospital(Local_NumberOfPatients , 0);
    }
    Hospital operator - (Hospital input)
    {
        int Local_NumberOfPatients = Class_intPrivNumberOfPatients - input.Class_intPrivNumberOfPatients ;
        return Hospital(Local_NumberOfPatients , 0);
    }
    /*Admin Mode Functions */
    void Class_pubAddPatient(void)
    {
        int Local_intPassState = LogIn_Func();
        if(Local_intPassState == PASS )
        {
            system("CLS");
            cout <<"Enter Id : ";
            cin>>Class_structPrivPatientsData[Class_intPrivNumberOfPatients].Id ;
            cout<<"Enter Name : ";
            cin>>Class_structPrivPatientsData[Class_intPrivNumberOfPatients].Name ;
            cout <<"Enter Age : ";
            cin>>Class_structPrivPatientsData[Class_intPrivNumberOfPatients].Age ;
            cout <<"Enter Gender : ";
            cin>>Class_structPrivPatientsData[Class_intPrivNumberOfPatients].Gender ;

            Class_intPrivNumberOfPatients++ ;
        }
        else
        {
            cout<<"Wrong in Login as an Admin "<<endl;
        }
    }
    void Class_pubDeletePatient(void)
    {
        int Local_intPassState = LogIn_Func();
        int Local_intId ;
        int flag = 0 ;
        if(Local_intPassState == PASS)
        {
            system("CLS");
            cout <<"Enter Patient Id : ";
            cin >>  Local_intId ;
            for(int Local_intIterator = 0 ; Local_intIterator <=MAX_NUMBER_OF_PATRIENTS ; Local_intIterator++ )
            {
                if(Class_structPrivPatientsData[Local_intIterator].Id ==Local_intId )
                {   
                    Class_structPrivPatientsData[Local_intIterator].Name = "0" ;
                    Class_structPrivPatientsData[Local_intIterator].Age = 0 ;
                    Class_structPrivPatientsData[Local_intIterator].Gender = "0" ;
                    Class_structPrivPatientsData[Local_intIterator].Id = 0 ;
                    Class_intPrivNumberOfPatients-- ;
                    flag = 1;
                }
            }
            if(flag == 0)
            cout<<"Wrong Id"<<endl;
        }
        else
        {
            cout<<"Wrong in Login as an Admin "<<endl;
        }
        
        
    }
    void Class_pubViewNumberOfPatients(void)
    {
        // int Local_intPassState = LogIn_Func();
        // int Local_intId ;
        // if(Local_intPassState == PASS)
        // {
            cout<<"Number of Patients on the Hospital = "<<Class_intPrivNumberOfPatients <<endl;
        // }
        // else
        // {
        //     cout<<"Wrong in Login as an Admin "<<endl;
        // }
    }
    void Class_pubReserveAppointment(void)
    {
        int Local_intPassState = LogIn_Func();
        int Local_intSlot ;
        if(Local_intPassState == PASS)
        {
            system("CLS");
            cout<<" Appointments in the hospital : "<<endl<<endl;
            for(int i = 0 ; i < 6 ; i++)
            {
                cout<< i+1<<". " << Class_AStringAppointments[i]<<" ===> "; 
                if(Class_AAppointments[i]== RESERVED)
                    cout<<"RESERVED"<<endl;
                else
                    cout<<"NotRESERVED"<<endl;
            }
            cout<<"Enter Number of Slot : ";
            cin>>Local_intSlot ;
            if(Class_AAppointments[Local_intSlot-1] == NOTRESERVED)
            {
                cout<<"SLOT RESERVED SUCCESSFULLY"<<endl;
                Class_AAppointments[Local_intSlot-1] = RESERVED ;
            }
            else
            {
                cout<<"WRONGG! , SLOT Already RESERVED "<<endl;
            }
        }
        else
        {
            cout<<"Wrong in Login as an Admin "<<endl;
        }
    }
    void Class_pubDeleteAppointment(void)
    {
       int Local_intPassState = LogIn_Func();
        int Local_intSlot ;
        if(Local_intPassState == PASS)
        {
            system("CLS");
            cout<<" Appointments in the hospital : "<<endl<<endl;
            for(int i = 0 ; i < 6 ; i++)
            {
                cout<< i+1<<". " << Class_AStringAppointments[i]<<" ===> "; 
                if(Class_AAppointments[i]== RESERVED)
                    cout<<"RESERVED"<<endl;
                else
                    cout<<"NotRESERVED"<<endl;
            }
            cout<<"Enter Number of Slot : ";
            cin>>Local_intSlot ;
            if(Class_AAppointments[Local_intSlot-1] == RESERVED)
            {
                cout<<"SLOT RESERVED SUCCESSFULLY"<<endl;
                Class_AAppointments[Local_intSlot-1] = NOTRESERVED ;
            }
            else
            {
                cout<<"WRONGG! , SLOT Already RESERVED "<<endl;
            }
        }
        else
        {
            cout<<"Wrong in Login as an Admin "<<endl;
        } 
    }
    void Class_pubViewPatients (void)
    {
        int Local_intId ;
        int flag = 0 ;
        cout <<"Enter Patient Id : ";
        cin >>  Local_intId ;
        for(int Local_intIterator = 0 ; Local_intIterator <=MAX_NUMBER_OF_PATRIENTS ; Local_intIterator++ )
        {
            if(Class_structPrivPatientsData[Local_intIterator].Id ==Local_intId )
            {
                cout<<"Name : "<<Class_structPrivPatientsData[Local_intIterator].Name <<endl;
                cout<<"Age : "<<Class_structPrivPatientsData[Local_intIterator].Age <<endl;
                cout<<"Gender : "<<Class_structPrivPatientsData[Local_intIterator].Gender <<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        cout<<"Wrong Id"<<endl;
    }
    void Class_pubViewSlots(void)
    {
        for(int i = 0 ; i < 6 ; i++)
            {
                cout<< i+1<<". " << Class_AStringAppointments[i]<<" ===> "; 
                if(Class_AAppointments[i]== RESERVED)
                    cout<<"RESERVED"<<endl;
                else
                    cout<<"NotRESERVED"<<endl;
            }
    }
  
};

// Hospital::Hospital(/* args */)
// {
// }

// Hospital::~Hospital()
// {
// }

int main(void)
{

    Hospital H1 ;
    Hospital H2 = ++H1 ;
    Hospital H3 = --H1 ;
    Hospital H4 = (H1 * H2) + (H3 / H1) + H2 ;

    int SystemChoice ;
    system("CLS");
    H1.Class_pubViewNumberOfPatients();
    cout<<"--------------"<<endl;
    H2.Class_pubViewNumberOfPatients();
    cout<<"--------------"<<endl;
    H3.Class_pubViewNumberOfPatients();
    cout<<"--------------"<<endl;
    H4.Class_pubViewNumberOfPatients();
   
    // while(1)
    // {
    //     cout<<"Enter 1 for H1 System "<<endl;
    //     cout<<"Enter 2 for H2 System "<<endl;
    //     cin>>SystemChoice ;
    //     while(SystemChoice == 1)
    //     {
    //         cout<<"Welcome in H1 System "<<endl;
    //         int ChooseMode = 0 ;
    //         int Chooice ;
    //         cout<<"Enter 1 for admin mode , Enter 2 for User Mode "<<endl;
    //         cout <<"Enter 0 To Exit H1 system"<<endl;
    //         cin>>ChooseMode ;
    //         if(ChooseMode == 1 )
    //         {
    //             cout<<" Enter 1 to add new patient " <<endl;
    //             cout<<" Enter 2 to Delete patient " <<endl;
    //             cout<<" Enter 3 to View number of patients " <<endl;
    //             cout<<" Enter 4 to Rserve Appointment " <<endl;

    //             cin>>Chooice ;
    //             if(Chooice == 1 )
    //             {
    //                 H1.Class_pubAddPatient();
    //             }
    //             else if(Chooice == 2)
    //             {
    //                 H1.Class_pubDeletePatient();
    //             }
    //             else if(Chooice == 3 )
    //             {
    //                 H1.Class_pubViewNumberOfPatients();
    //             }
    //             else if ( Chooice == 4 )
    //             {
    //                 H1.Class_pubReserveAppointment();
    //             }
    //         }
    //         else if(ChooseMode == 2 )
    //         {
    //             cout<<" Enter 1 to View patient Info " <<endl;
    //             cout<<" Enter 2 to View Slots available " <<endl;
    //             cin>>Chooice ;
    //             if(Chooice == 1 )
    //             {
    //                 H1.Class_pubViewPatients();
    //             }
    //             else if (Chooice == 2 )
    //             {
    //                 H1.Class_pubViewSlots();
    //             }
    //         }
    //         else if(ChooseMode == 0)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             cout<<"You Entered wrong chooice "<<endl;
    //         }
    //     }
    //     while(SystemChoice == 2)
    //     {
    //         cout<<"Welcome in H2 System "<<endl;

    //         int ChooseMode = 0 ;
    //         int Chooice ;
    //         cout<<"Enter 1 for admin mode , Enter 2 for User Mode "<<endl;
    //         cout <<"Enter 0 To Exit H2 system"<<endl;
    //         cin>>ChooseMode ;
    //         if(ChooseMode == 1 )
    //         {
    //             cout<<" Enter 1 to add new patient " <<endl;
    //             cout<<" Enter 2 to Delete patient " <<endl;
    //             cout<<" Enter 3 to View number of patients " <<endl;
    //             cout<<" Enter 4 to Rserve Appointment " <<endl;

    //             cin>>Chooice ;
    //             if(Chooice == 1 )
    //             {
    //                 H2.Class_pubAddPatient();
    //             }
    //             else if(Chooice == 2)
    //             {
    //                 H2.Class_pubDeletePatient();
    //             }
    //             else if(Chooice == 3 )
    //             {
    //                 H2.Class_pubViewNumberOfPatients();
    //             }
    //             else if ( Chooice == 4 )
    //             {
    //                 H2.Class_pubReserveAppointment();
    //             }
    //         }
    //         else if(ChooseMode == 2 )
    //         {
    //             cout<<" Enter 1 to View patient Info " <<endl;
    //             cout<<" Enter 2 to View Slots available " <<endl;
    //             cin>>Chooice ;
    //             if(Chooice == 1 )
    //             {
    //                 H2.Class_pubViewPatients();
    //             }
    //             else if (Chooice == 2 )
    //             {
    //                 H2.Class_pubViewSlots();
    //             }
    //         }
    //         else if(ChooseMode == 0)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             cout<<"You Entered wrong chooice "<<endl;
    //         }
    //     }
    // }
    return 0 ;
}
