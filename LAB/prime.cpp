#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        bool f=false;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
            f=true;
            break;
            }
        }
        if(!f)
        cout<<i<<"\t";
    }
    return 0;
}