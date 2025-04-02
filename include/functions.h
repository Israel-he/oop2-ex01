#pragma once
#include <string>
#include "SquareMatrix.h"
class functions
{
public:
	//functions() {};
	functions(std::string name,int numOfFunc);
	virtual ~functions() {}; // Add virtual destructor
	
	virtual SquareMatrix action(int); 
	virtual SquareMatrix action(std::vector<SquareMatrix> func);

	//virtual SquareMatrix action(SquareMatrix mat);
   virtual std::string getName();
   virtual int getNumOfFunc() const;
protected:
	int m_numFoFunc;
	std::string m_name;
};