#include<iostream>
#include "HelloClass.h"
using namespace std;

void HelloClass::printDetails()
{
	
	cout << "Printing details;";
	cout << endl << "Age is" << age;
	cout << endl << "Name is" << name;
	cout <<endl <<" New git change";
	cout <<endl <<" New git change2";

}



int main()
{

	int result = 0;

	cout << "Hello world";

	HelloClass hello1;


	hello1.printDetails();	

	return result;
}
