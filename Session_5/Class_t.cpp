#include <iostream>
#include <string>


using namespace std ;

template<typename T>

class MyClass
{
    private :
    T value_;

    public:
    MyClass(T value):value_(value)
    {                   }
    void SetValue(T value_)
    {
        this->value_ = value_ ;
    }
    T getValue() const
    {
        return value_;
    }

    T add1(T value_) const
    {
        return value_ + this->value_ ;
    }

    T subtract1(T value_) const
    {
        return this->value_ - value_ ;
    }
};

int main()
{

    MyClass<int> intobj(5);

    cout << "init value : "<<intobj.getValue() <<endl ;
    cout << "add 2 : "<<intobj.add1(2) <<endl ;
    cout << "Substract 1 : : "<<intobj.subtract1(1) <<endl ;
    
cout<<"----------------"<<endl;
    MyClass <double> doubleObj(5.2);
    cout << "init value : "<<doubleObj.getValue() <<endl ;
    cout << "add 2 : "<<doubleObj.add1(2) <<endl ;
    cout << "Substract 1 : : "<<doubleObj.subtract1(1) <<endl ;
    
    return 0;
}