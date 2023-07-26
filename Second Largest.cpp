#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int arr[3];
        for(int j=0;j<3;j++)
        cin>>arr[j];
        if(arr[0]>arr[1] && arr[0]>arr[2])
        {
            if(arr[1]>arr[2])
            cout<<arr[1]<<endl;
            else if(arr[1]<arr[2])
            cout<<arr[2]<<endl;
        }
        if(arr[1]>arr[0] && arr[1]>arr[2])
        {
            if(arr[0]>arr[2])
            cout<<arr[0]<<endl;
            else if(arr[0]<arr[2])
            cout<<arr[2]<<endl;
        }
        if(arr[2]>arr[1] && arr[2]>arr[0])
        {
            if(arr[1]>arr[0])
            cout<<arr[1]<<endl;
            else if(arr[1]<arr[0])
            cout<<arr[0]<<endl;
        }
    }
	return 0;
}
