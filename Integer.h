#ifndef INTEGER_H
#define INTEGER_H

#include "SmartPointer.h"

class Integer {
private:
	SmartPointer sp;
public:
	Integer(int value);
	~Integer();
	int getValue();
};

#endif