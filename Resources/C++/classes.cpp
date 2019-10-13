// C++ program to demonstrate accessing of data members 

#include <bits/stdc++.h> 
using namespace std; 
class Hacktober 
{ 
	// Access specifier 
	public: 

	// Data Members 
	string name; 

	// Member Functions() 
	void printname() 
	{ 
	cout << "name is: " << name; 
	} 
}; 

int main() { 

	// Declare an object of class geeks 
	Hacktober obj1; 

	// accessing data member 
	obj1.name = "Abhi"; 

	// accessing member function 
	obj1.printname(); 
	return 0; 
} 
