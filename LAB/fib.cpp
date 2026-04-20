#include <iostream>
using namespace std;
int main()
{
    int n,i=2,c,a=0,b=1;
    cout<<"Enter value of n ";
    cin>>n;
    cout<<"Fibonacci series \n";
     cout<<a<<"\t";
      cout<<b<<"\t";
   while(i<n)
    {
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
        i++;
    }
    return 0;
}