#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int a[4]={0},x=0;
	    string s;
	    cin>>s;
	    x=s.length();
	    for (int i=0;i<s.length();i++){
	        if (s[i]>='a' && s[i]<='z')
	        a[0]++;
	        else if (s[i]>='A' && s[i]=<'Z' && i!=0 && i!=x-1)
	        a[1]++;
	        else if (s[i]>='0' && s[i]=<'9' && i!=0 && i!=x-1)
	        a[2]++;
	        else if ((s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?') && i!=0 && i!=x-1)
	        a[3]++;
	    }
	    if (a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0 && s.length()>=10)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
