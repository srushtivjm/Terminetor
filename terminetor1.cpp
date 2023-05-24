#include<iostream>
#include<string.h>
using namespace std;
class car;
class Garage
{
	public :
		
	Garage(int a)
	{
		try
		{
			throw a;
		}
		catch(int a)
		{
			cout<<a<<" decleread.";
		}
	}
};
class Car
{
	public :
		
    Car(int n)
	{
		Garage g1(n);
	}
};
class Motor
{
	public :
		
		Motor()
		{
			throw Car(43);
		}
};
int main()
{
	try
	{
      	Motor m1;
	}
	catch(...)
	{
		cout<<"---Compele---"<<endl;
	}
	return 0;
}
