#include <iostream>
#include "guide.h"

int main(){

	guide com1("company", "owner", "number", "address", "career", "test.txt");
	guide com2("company2", "owner2", "number2", "address2", "career2", "test.txt");

	com1.Add("test.txt");
	com2.Show("test.txt");

	com1.FindCareer("career3", "test.txt");
	com1.FindCompany("company2", "test.txt");
	com1.FindOwner("owner", "test.txt");
	com1.FindNumber("number2", "test.txt");
	
};


