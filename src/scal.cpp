#include "scal.h"

scal::scal(int scalar)
	: functions("scal" + std::to_string(scalar), 1), m_scalar(scalar)
{
	 
}
SquareMatrix scal::action(int)
{
	return SquareMatrix();
}
SquareMatrix scal::action(std::vector<SquareMatrix> func)
{
	return SquareMatrix();
}
std::string scal::getName()
{
	return std::string();
}
//----------------------------------------------------
//SquareMatrix scal::action(SquareMatrix mat)
//{
//	SquareMatrix mat2(mat.getSize());
//
//	for (int i = 0; i < mat.getSize(); i++)
//	{
//		for (int j = 0; j < mat.getSize(); j++)
//		{
//			mat2(i, j) = mat(i, j) * m_scalar;
//		}
//	}
//	return mat2;
//}
//-----------------------------------------------------	
 
//-----------------------------------------------------