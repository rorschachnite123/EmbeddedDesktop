#include<iostream>
#include "HelloClass.h"
#include "AddressLocate.h"
using namespace std;

void HelloClass::printDetails()
{
	
	cout << "Printing details;";
	cout << endl << "Age is" << age;
	cout << endl << "Name is" << name;
	cout <<endl <<" New git change";

}


void AddressLocate::setValue(int value)
{
	*ptr = value;

}

void AddressLocate::getValue(int *ptraddr)
{
	
	cout <<endl<< "Value is" << *(ptraddr);
}

int main()
{

	int result = 0, sai=1;
	int* ptr = (int*)BASE_ADDRESS_LOCATE;

 
	cout << "Hello world";

	HelloClass hello1;
	AddressLocate addr1;


	hello1.printDetails();

	addr1.setValue(10);

	addr1.getValue(&result);


 	return result;
}
