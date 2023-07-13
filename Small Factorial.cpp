#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int res=1,i;
        for(i=2;i<=n;i++)
        res*=i;
        cout<<res<<endl;
    }
	return 0;
}
