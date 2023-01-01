#include <iostream>
using namespace std;
    class A
    {
        int a,b,c;
        public:
        void accept()
        {cin>>a>>b>>c;}
        void max()
        {
            if (a>=b && a>=c)
            cout<<a;
            else if (b>=a && b>=c)
            cout<<b;
            else
            cout<<c;
        }
    };
int main()
{
    A obj;
    obj.accept();
    obj.max();
    return 0;
}
