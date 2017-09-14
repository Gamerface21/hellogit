//Client
//Main.cpp

#include <vector>
#include <iostream>
#include "Register.h"

	using namespace std;
	
	int main ()
		{
			vector <Register> V1 = {{"Joshua", 21} , {"Jonathan", 19} , {"Jake" , 24}, {"Sam", 20 }};
			
			for(auto V:V1)
				{
				  cout << "Name: " <<V.getname() << "Age: " << V.getage() << endl;
				}
				cout << endl;
		}
		
		
