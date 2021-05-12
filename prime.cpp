//check weather given number is prime or not
//first method
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int i;
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


//second method
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int i;
    for(i=2;i<=(num/2);i++)
    {
   8=     if(num%i==0)
        {
            cout<<"Not Prime";
            exit(0);
        }
    }
    cout<<"Prime";
}*/


//third method
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"Not Prime";
            exit(0);
        }
    }
    cout<<"Prime";
}*/

