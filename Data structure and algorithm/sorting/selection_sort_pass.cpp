#include<iostream>
using namespace std;
 
//Sort the elements in increasing order
void f(int *a,int n,int pass){
 
                for(int pos = 0; pos < n-1; pos++){
 
                                int min_position = pos;
 
                                for(int j=pos+1; j<n; j++){
 
                                                if(a[j] < a[min_position]){
                                                                min_position = j;
                                                }
 
                                }
                                swap(a[min_position],a[pos]);
                  if (pos==pass)
                  {
                   for( int i=0;i<n;i++)
                    cout <<a[i]<<" ";
                    cout <<endl;
                  }
                 
                }
}
 
 
int main(){
                int n;
                cin>>n;
                int a[n];
                for (int i=0;i<n;i++)
                  cin>>a[i];
                int pass;
                cin>>pass;
                f(a,n,pass);
 
                return 0;
}
