#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>b>>a;
	    if(a>=b || b/2<=a)
	     cout<<(b/2)<<endl;
	    else if(b/2>a)
	     cout<<a<<endl;
	}
	return 0;
}
