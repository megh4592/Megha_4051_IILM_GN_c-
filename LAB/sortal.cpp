#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter value of n ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cout<<"Enter any number ";
       cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Array Sorted in Ascending order \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}