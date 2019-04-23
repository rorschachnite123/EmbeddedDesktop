#ifndef _ADDRESS_LOCATE_H
#define _ADDRESS_LOCATE_H

#define BASE_ADDRESS_LOCATE 0x006FFD48

class AddressLocate {
private: 
	int* ptr = (int *) 0x6FFD48;
public:
	void setValue(int);
	void getValue(int*);


};
#endif // !_ADDRESS_LOCATE_H

