#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,d;
	    cin>>n>>d;
	    if(d<=n)
	    cout<<d<<endl;
	    else
	    {
	     while(d>n)
	     {d = d-n-1;}
	     cout<<d<<endl;
	    }
	}
	return 0;
}
