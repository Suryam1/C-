#include <iostream>
#include <string>
using namespace std;
class A{
    protected:
    string rollno;
};
class B:public A{
    protected:
    string name;
};
class C : public B{
    protected:
    float cgpa;
    public:
    void accept()
    {
        getline(cin,rollno);
        getline(cin,name);
        cin>>cgpa;
    }
    void display()
    {
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"CGPA = "<<cgpa<<endl;
    }
};
int main()
{
    C obj;
    obj.accept();
    obj.display();
}