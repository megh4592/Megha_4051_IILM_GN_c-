#include <iostream>
using namespace std;
int main()
{
    int n,i,mx,mn;
    cout<<"Enter value of n ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cout<<"Enter any number ";
       cin>>arr[i];
    }
    mx=arr[0];
    mn=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        mx=arr[i];
        if(arr[i]<mn)
        mn=arr[i];
    }
    cout<<"Largest number = "<<mx<<endl;
    cout<<"Smallest number = "<<mn<<endl;
    return 0;
}