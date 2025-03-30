#include "scal.h"

scal::scal(int scalar)
	:m_name("scal"), m_scalar(scalar)
{
}
//----------------------------------------------------
SquareMatrix scal::action(SquareMatrix mat)
{
	SquareMatrix mat2(mat.getSize());

	for (int i = 0; i < mat.getSize(); i++)
	{
		for (int j = 0; j < mat.getSize(); j++)
		{
			mat2(i, j) = mat(i, j) * m_scalar;
		}
	}
	return mat2;
}
//-----------------------------------------------------	
std::string scal::getName()
{
	return m_name;
}
//-----------------------------------------------------