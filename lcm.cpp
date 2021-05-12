#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a and b"<<endl;
	cin>>a;
	cin>>b;
	if(a<b)
	{
		swap(a,b);
	}
	for(int i=a;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			cout<<"Lcm of "<<a<<" "<<b<<" "<<" is "<<i;
			break;
		}
	}
}
