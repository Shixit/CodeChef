#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x;
	    char s[14];
	    cin>>x;
	    for(int i=0;i<14;i++)
	        cin>>s[i];
	    int c=0,n=0,d=0;
	    for(int i=0;i<14;i++)
	    {
	        if(s[i]=='C')
	        c++;
	        else if(s[i]=='N')
	        n++;
	        else d++;
	    }
	    int sc,sn;
	    sc = (2*c)+d;
	    sn = (2*n)+d;
	    if(sc>sn)
	    cout<<60*x<<endl;
	    else if(sc<sn)
	    cout<<40*x<<endl;
	    else cout<<55*x<<endl;
	}
	return 0;
}
