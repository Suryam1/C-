#include<iostream>
using namespace std;
void f(int arr[], int n,int pass)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        if(pass==i-1){
          for (int k=0;k<n;k++)
          cout <<arr[k]<<" ";
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
