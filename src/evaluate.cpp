#include "evaluate.h"
#include <iostream>


evaluate::evaluate()
{
}

 SquareMatrix evaluate::createMatrix()
{
	 std::cout << "kk\n";

	std::cin >> m_sizeMat;//???????????????
	SquareMatrix mat(m_sizeMat);
	std::cin >> mat;
	std::cout << mat<<"\n";
	return mat;
}
 //-----------------------------------------------------
void evaluate::getFunction(functions* func)
{
	std::cout<<func->action(createMatrix())<<"\n";
}

//----------------------------------------------------------
void evaluate::print()
{
}
