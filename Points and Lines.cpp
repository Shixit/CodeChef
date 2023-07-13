// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int k=0;k<t;k++)
// 	{
// 	    int n,c1=1,c2=1,i,j;
// 	    cin>>n;
// 	    int x[n],y[n];
// 	    for(i=0;i<n;i++)
// 	    {
// 	    cin>>x[i]>>y[i];
// 	    }
// 	    sort(x,x+n);
// 	    sort(y,y+n);
// 	    for(i=0;i<n;i++)
// 	    {
// 	        for(j=0;j<n;j++)
// 	        {
// 	           if(x[i]==x[j] && i!=j)
// 	           break;
// 	        }
// 	        if(j==n)
// 	        c1++;
// 	    }
// 	    for(i=0;i<n;i++)
// 	    {
// 	        for(j=0;j<n;j++)
// 	        {
// 	           if(y[i]==y[j] && i!=j)
// 	           break;
// 	        }
// 	        if(j==n)
// 	        c2++;
// 	    }
// 	    cout<<c1+c2<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int c1=1,c2=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {c1++;}
            if(b[i]!=b[i+1])
            {c2++;}
        }
        cout<<c1+c2<<endl;
    }
    
}
