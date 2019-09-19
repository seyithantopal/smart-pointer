#include "SmartPointer.h"

SmartPointer::SmartPointer(int* p) : ptr{p} {}

SmartPointer::~SmartPointer() {
	delete ptr;
}

int& SmartPointer::operator*() const {
	return *ptr;
}

int* SmartPointer::operator->() const {
	return ptr;
}