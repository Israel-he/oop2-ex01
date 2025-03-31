#include "sub.h"
 
 

sub::sub(std::shared_ptr<functions> func1, std::shared_ptr<functions> func2)
	:m_func1(func1), m_func2(func2)
{
	//m_funcName = func1->getName() + "-" + func2->getName();


	/*m_func1 = std::make_shared<functions>();
	m_func2 = std::make_shared<functions>();
	m_funcName = "sub";*/
}
//
SquareMatrix sub::action(SquareMatrix mat)
{
	SquareMatrix mat1 = mat;
	SquareMatrix mat2 = m_eval.createMatrix();

	m_func1->action(mat1);
	m_func2->action(mat2);
	SquareMatrix mat3(mat1.getSize());

	
		mat3 = (mat1 - mat2);

		return mat3;
}
//--------------------------------------------------------------------------------------
std::string sub::getName()
{
	return m_func1->getName() + " - " + m_func2->getName();
}

//--------------------------------------------------------------------------------------

