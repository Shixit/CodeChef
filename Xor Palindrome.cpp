#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n,z=0,o=0;
	    cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++)
	        cin>>s[i];
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        z++;
	         else
	        o++;
	    }
	    if(n%2==0)
	    {
	        if(z==o)
	            cout<<"YES"<<endl;
	        else if(z%2==0 && o%2==0)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	    }
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}

