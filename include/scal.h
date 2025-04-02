
#pragma once
#include <string>
#include "functions.h"
#include "SquareMatrix.h"
class scal : public functions
{
public:
	scal(int scalar);

	virtual SquareMatrix action(int);
	virtual SquareMatrix action(std::vector<SquareMatrix> func);
	virtual std::string getName() override;

 
private:
	int m_scalar;
 
};