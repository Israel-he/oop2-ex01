#include "sub.h"
 
 
 

sub::sub(std::shared_ptr<functions> func1, std::shared_ptr<functions> func2)
	: functions(createName(func1,func2), func1->getNumOfFunc() + func2->getNumOfFunc()),
       m_func1(func1), m_func2(func2)
{
}
//
//SquareMatrix sub::action(SquareMatrix mat)
//{
//	SquareMatrix mat1 = mat;
//	SquareMatrix mat2 = m_eval.createMatrix(mat.getSize());
//
//	m_func1->action(mat1);
//	m_func2->action(mat2);
//	SquareMatrix mat3(mat1.getSize());
//
//	
//		mat3 = (mat1 - mat2);
//
//		return mat3;
//}
//--------------------------------------------------------------------------------------
std::string sub::getName()
{
	return m_func1->getName() + " - " + m_func2->getName();
}
//--------------------------------------------------------------------------------------

SquareMatrix sub::action(int sizeMat)
{
	functions::getName();
	std::cout << "\nPlease enter " << m_numFoFunc << " matrices:" << std::endl;


	return m_func1->action(sizeMat) - m_func2->action(sizeMat);

}
//--------------------------------------------------------------------------------------
SquareMatrix sub::action(std::vector<SquareMatrix> func)
{
	int split = m_func1->getNumOfFunc();
	std::vector<SquareMatrix> biggen(func.begin(), func.begin() + split);
	std::vector<SquareMatrix> las(func.begin() + split, func.end());

	return m_func1->action(biggen) - m_func2->action(las);
}
//--------------------------------------------------------------------------------------
std::string sub::createName(std::shared_ptr<functions> m_func1, std::shared_ptr<functions> m_func2)
{
	return ((m_func1->getNumOfFunc() + m_func2->getNumOfFunc()) > 2) ?
		(std::string{ "(" + m_func1->getName() + " - " + m_func2->getName() + ")" }) :
		(std::string{ m_func1->getName() + " - " + m_func2->getName() });
}

//--------------------------------------------------------------------------------------
 
