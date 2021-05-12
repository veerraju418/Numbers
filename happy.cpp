//happy number
#include<iostream>
using namespace std;
int main()
{
    int num,r,res=0;
    cout<<"Enter number"<<endl;
    cin>>num;
    while(num>9)
    {
        while(num)
        {
            r=num%10;
            num=num/10;
            res=res+r*r;
        }
        num=res;
        res=0;
    }
    if(num==1)
    {
        cout<<"Happy number";
    }
    else{
        cout<<"Not happy number";
    }
}