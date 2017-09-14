//Class IMplimentation
//Register.cpp

#include "Register.h"
#include <string>
 using namespace std;

string Register:: getname()
	{
		return name;
	}
void Register:: setname(string n)
	{
		name=n;
	}
	
int Register:: getage()
	{
		return age;
	}
void Register:: setage(int a)
	{
		age=a;
	}
Register::Register(string n, int a)
	{
		name=n;
		age=a;
	}
	
