#include <iostream>
using namespace std;
int main()
{
    int n,i,j,t;
    cout<<"Enter value of n ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cout<<"Enter any number";
       cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    cout<<"Array Sorted in Ascending order \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}