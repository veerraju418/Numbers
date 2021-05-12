#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter number to check weather it is prime or not"<<endl;5
    cin>>num;
    for(i=2;i<=(num/2)+1;i++)
    {
        if(num%i==0)
        {
            cout<<"Not Prime";
            exit(0);
        }
    }
    cout<<"Prime";
}