 #include<iostream>
 using namespace std;
 int sum(int x,int y);
 int diff(int x,int y);
 int product(int x,int y);
 int quotient(int x,int y);
 int remainder(int x,int y);
 int main()
 {
     int x,y;
     cin>>x>>y;
     cout<<"sum = "<<sum(x,y)<<endl;
     cout<<"Diff = "<<diff(x,y)<<endl;
     cout<<"Product = "<<product(x,y)<<endl;
     cout<<"Quotient = "<<quotient(x,y)<<endl;
     cout<<"Remainder = "<<remainder(x,y)<<endl;
     return 0;
 }
  int sum(int x,int y)
 {
     return x+y;
 }
 int diff(int x,int y)
 {
     return x-y;
 }
 int product(int x,int y)
 {
     return x*y;
 }
 int quotient(int x,int y)
 {
     return x/y;
 }
 int remainder(int x,int y)
 {
     return x%y;
 }