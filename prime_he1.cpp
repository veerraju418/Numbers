#include<iostream>
using namespace std;
int main()
{
    int range;
    cin>>range;
    int i,j,flag;
    for(i=1;i<=range;i++)
    {
        if(i==1 || i==0)
        {
            continue;
        }
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }
    
}