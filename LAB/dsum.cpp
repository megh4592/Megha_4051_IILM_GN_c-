#include <iostream>
using namespace std;
int main()
{
int n,s=0;
cout<<"Enter any number ";
cin>>n;
for(int i=n;i>0;i=i/10)
{
    s=s+i%10;
}
cout<<"SUM "<<s;
return 0;
}