#include "functions.h"
#include <iostream>
#include "SquareMatrix.h"
#include <string>
class id : public functions
{
public:

	id();
	~id() override {}; // Add virtual destructor
	SquareMatrix action(SquareMatrix mat) override;
	virtual std::string getName() override;
private:
	//SquareMatrix m_matr
	std::string m_name;
};  



