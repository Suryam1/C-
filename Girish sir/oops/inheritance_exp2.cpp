#include <iostream>
#include <string>
using namespace std;
class A{
    protected:
    string rollno;
    string name;
};
class B:public A{
    protected:
    float marks1;
    float marks2;
    float marks3;
    float avg;
    string grade;
    public:
    void accept()
    {
        cin>>rollno;
        cin.get();
        getline(cin,name);
        cin>>marks1>>marks2>>marks3;
        avg=(marks1+marks2+marks3)/3;
    }
    void display()
    {
        cout<<"Roll no is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Marks 1 "<<marks1<<endl;
        cout<<"Marks 2 "<<marks2<<endl;
        cout<<"Marks 3 "<<marks3<<endl;
        cout<<"Average = "<<avg<<endl;
        if (avg>=90)
        {grade="A+";}
        else if (avg>=80)
        {grade="A";}
        else if (avg>=70)
        {grade="B";}
        else 
        {grade="Improve";}
        cout<<"Grade = "<<grade<<endl;
    }
};
int main()
{
    B obj;
    obj.accept();
    obj.display();
}