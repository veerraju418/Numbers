#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter number to check weather it is prime or not"<<endl;
    cin>>num;
    for(i=2;i<=(num-1);i++)
    {
        if(num%i==0)
        {
            cout<<"Not Prime";
            exit(0);
        }
    }
    cout<<"Prime";
}