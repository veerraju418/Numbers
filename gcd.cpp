#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter num1 num2"<<endl;
    cin>>num1>>num2;
    while(1)
    {
        if(num1<num2)
        {
            swap(num1,num2);
        }
        num1=num1%num2;
        if(num1==0)
        {
            break;
        }
    }
    cout<<"gcd= "<<num2;
}