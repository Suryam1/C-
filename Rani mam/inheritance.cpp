#include <iostream>
using namespace std;
class RBI{
    protected:
    float ROI = 0.05;
};
class SBI : public RBI{
    protected:
    float amount;
    float interest;
    public:
    void accept()
    {
        cout<<"Enter Amount"<<endl;
        cin>>amount;
    } 
    void display()
    {
        interest=amount*ROI;
        cout<<"Interest is "<<interest<<endl;
    }
};
class ICICI : public RBI{
    protected:
    float amount;
    float interest;
    public:
    void accept()
    {
        cout<<"Enter Amount"<<endl;
        cin>>amount;
    } 
    void display()
    {
        interest=amount*ROI;
        cout<<"Interest is "<<interest<<endl;
    }
};
class YES : public RBI{
    protected:
    float amount;
    float interest;
    public:
    void accept()
    {
        cout<<"Enter Amount"<<endl;
        cin>>amount;
    } 
    void display()
    {
        interest=amount*ROI;
        cout<<"Interest is "<<interest<<endl;
    }
};
int main()
{
    SBI obj1;
    obj1.accept();
    obj1.display();
    ICICI obj2;
    obj2.accept();
    obj2.display();
    YES obj3;
    obj3.accept();
    obj3.display();
}