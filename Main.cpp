#include<iostream>
#include "HelloClass.h"
using namespace std;

void HelloClass::printDetails()
{
	
	cout << "Printing details;";
	cout << endl << "Age is" << age;
	cout << endl << "Name is" << name;
	cout <<endl <<" New git change";

}



int main()
{

	int result = 0, sai=1;

	cout << "Hello world";

	HelloClass hello1;


	hello1.printDetails();	

	return result;
}
