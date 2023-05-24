#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int m,n,o;
	m=18;
	n=0;
	char example[]="can not divide by zero";
	
	try
	{
		if(o==0)
		{
			throw example;
		}
		else
		{
		   	o=m/n;
			cout<<"O ="<<o<<endl;  	
		}
	}
	catch(int n[])
	{
		cout<<n<<endl;
	}
	catch(...)
	{
		cout<<"Genral exeption.";
	}
	return 0;
}
