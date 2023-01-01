#include <iostream>
using namespace std;
 class A{
     protected:
     int x;
 };
 class B:public A{
     protected:
     int y;
     public:
     void accept(){
         cin>>x>>y;
     }
     void display(){
         cout<<"x= "<<x<<" y= "<<y<<endl;
         cout<<"sum= "<<x+y<<endl;
     }
 };
 int  main()
 {
     B obj;
     obj.accept();
     obj.display();
 }