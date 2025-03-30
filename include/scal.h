
#pragma once
#include <string>
#include "functions.h"
#include "SquareMatrix.h"
class scal : public functions
{
public:
	scal(int scalar);

	virtual	SquareMatrix action(SquareMatrix mat) override;
	virtual std::string getName() override;

 
private:
	int m_scalar;
	std::string m_name;
};