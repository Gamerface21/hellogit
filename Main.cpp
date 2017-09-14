//Client
//Main.cpp

#include <vector>
#include <iostream>
#include "Register.h"
#include <string>

	using namespace std;
	
	int main ()
		{
			vector <Register> V1 = {{"Joshua", 21} , {"Jonathan", 19} , {"Jake" , 24}, {"Sam", 20 }};
			
			for(int i=0; i < V1.size(); i++)
				{
				  cout << "Name: " <<V1.getname() << "Age: " << V1.getage() << endl;
				}
				cout << endl;
		}
		
		
