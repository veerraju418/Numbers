//prime number is divisible by 1 and itself
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nt,i,j,flag;
    cin>>nt;
    int num;
    for(i=1;i<=nt;i++)
    {
        flag=1;
        cin>>num;
        for(j=2;j<=sqrt(num);j++)
        {
            if(num%j==0)
            {
                
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"1"<<endl;
        }
        else if(flag==0)
        {
            cout<<"-1"<<endl;
        }
    }
}