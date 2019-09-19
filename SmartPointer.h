#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include <iostream>
using namespace std;

class SmartPointer {
private:
	int* ptr;
public:
	SmartPointer(int* ptr);
	~SmartPointer();
	int& operator*() const;
	int* operator->() const;
};

#endif