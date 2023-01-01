#include <iostream>
using namespace std;
class Count{
    public:
    int count;
    Count (int c)
    {
        count=c;
    }
    Count ()
    {
        count=0;
    }
};
void increment (Count &c,int &n)
{
    c.count++;
    n++;
}
int main()
{
    Count mycount;
    int times=0;
    for (int i=0;i<3;i++)
    increment(mycount,times);
    cout<<"Count is "<<mycount.count<<endl;
    cout<<"Times is "<<times<<endl;
}