#include <iostream>
#include <string>

using namespace std ;
class company
{
    private:
        int annual_earned_money = 0 ;
        int employee_number = 0 ;
        int customer_number = 0 ;
        int average_employee_salary = 0 ;

    public:
        void Add_Employee(void);
        void Add_Customer(void);
       
        void Set_average_employees_salar( int Local_salary);
        
        void Set_annual_earned_money(int target_value);
        
        void Show_Copmany_Data(void);

};
 void company::Add_Employee(void)
        {
            if(employee_number < 100)
            {
                employee_number++ ;
            }
        }
 void company::Add_Customer(void)
        {
            customer_number++ ;
        }
        void company::Set_average_employees_salar( int Local_salary)
        {
            if(Local_salary > 1000)
            {
                average_employee_salary = Local_salary ;
            }
            else
            {
                cout << "Invalid Salary value"<<endl;
            }
        }
        void company::Set_annual_earned_money(int target_value)
        {
            annual_earned_money = target_value ;
        }
        void company::Show_Copmany_Data(void)
        {
            cout << "Annual earned money = "<<annual_earned_money <<endl;
            cout << "Average employee salary = "<<average_employee_salary <<endl ;
            cout << "Number of customers = "<<customer_number<<endl ;
            cout << "Number of employees = "<<employee_number<<endl;
        }
int main(void)
{
    company valeo ;
    valeo.Add_Customer();

    valeo.Add_Employee();
    valeo.Add_Employee();
    valeo.Add_Employee();
    valeo.Add_Employee();
    valeo.Add_Employee();
    
    valeo.Set_average_employees_salar(1500);
    valeo.Set_annual_earned_money(200000);

    valeo.Show_Copmany_Data();
    valeo.Add_Employee();
    valeo.Add_Employee();
    valeo.Show_Copmany_Data();

    return 0 ;
}