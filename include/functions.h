#pragma once
#include <string>
#include "SquareMatrix.h"
class functions
{
public:

	functions();
	virtual ~functions() {}; // Add virtual destructor
	virtual SquareMatrix action(SquareMatrix mat);
   virtual std::string getName();
private:


};