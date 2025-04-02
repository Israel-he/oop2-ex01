#include "functions.h"

functions::functions(std::string name, int numOfFunc)
	:m_name(name),m_numFoFunc(numOfFunc)
 
{
}
SquareMatrix functions::action(int)
{
	return SquareMatrix{};
}

//-----------------------------------------------------

SquareMatrix functions::action(std::vector<SquareMatrix> func)
{
	 return SquareMatrix{}; 
};


 
//-----------------------------------------------------
std::string functions::getName()
{
	return m_name;
}

int functions::getNumOfFunc() const
{
	return m_numFoFunc;
}

 

//-----------------------------------------------------
 
