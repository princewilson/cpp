#include<iostream>

using namespace std;

class Parents // Parent Class
{
    public:
        string father = "Wilson";
        string mother = "Tresa";
};

class Child : public Parents // Child class inheriting Parent class properties
{
    string me = "Prince";
    public:    
        void myname()
        {
            cout << "My name is: " << me << endl;
        }
};

int main(void)
{
    Child obj;
    cout << "My father's name is: " << obj.father << endl; /*
    Parent data members being accessed by child class object */
    cout << "My mother's name is: " << obj.mother << endl;
    obj.myname();
    return 0;
}