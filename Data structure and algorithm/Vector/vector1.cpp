#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (vector<int>::iterator it=vec.begin();it!=vec.end();++it){
        cout<<*it<<endl;
    }

    for (vector<int>::reverse_iterator itr=vec.rbegin();itr!=vec.rend();++itr){
        cout<<*itr<<endl;
    }

    int n=3;
    int m=10;
    vector<int>vect(n,m);

    for (vector<int>::iterator ite=vect.begin();ite!=vect.end();++ite){
        cout<<*ite<<endl;
    }

    vector<int>v2{10,20,30,40,50};

    int arr[]={10,20,30};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector <int> v1(arr,arr+n1);

    for (vector<int>::iterator iter=v1.begin();iter!=v1.end();++iter){
        cout<<*iter<<endl;
    }

    vector<int>vec1{10,20,30};

    vector<int>vec2(vec1.begin(),vec1.end());

    vector<int>vec3(vec1);

    for (vector<int>::iterator itera=vec2.begin();itera!=vec2.end();++itera){
        cout<<*itera<<endl;
    }

    for (vector<int>::iterator iterat=vec3.begin();iterat!=vec3.end();++iterat){
        cout<<*iterat<<endl;
    }
}