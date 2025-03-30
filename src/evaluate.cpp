#include "evaluate.h"
#include <iostream>


evaluate::evaluate()
{
}

 SquareMatrix evaluate::createMatrix()
{
	std::cout << "Enter the size of the matrix: \n";
	std::cin >> m_sizeMat;
	SquareMatrix mat(m_sizeMat);
	std::cin >> mat;
	std::cout << mat;
	return mat;
}

void evaluate::getFunction(functions* func)
{
	
	std::cout<<func->action(createMatrix());
}



void evaluate::print()
{
}
