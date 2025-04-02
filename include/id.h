#include "functions.h"
#include <iostream>
#include "SquareMatrix.h"
#include <string>
class id : public functions
{
public:

	id();
	~id() override {}; // Add virtual destructor
	virtual SquareMatrix action(int);
	virtual SquareMatrix action(std::vector<SquareMatrix> func);
	virtual std::string getName() override;
private:
	//SquareMatrix m_matr
	 
	 
};  



