#include "evaluate.h"
#include <iostream>


evaluate::evaluate()
{
}

std::vector<SquareMatrix> evaluate::createMatrixes(std::shared_ptr<functions> func, int sizeMat)
{
	if (func->getNumOfFunc() > 1) {
		std::cout << "\nPlease enter " << func->getNumOfFunc() << " matrices:" << std::endl;
	}
	std::vector<SquareMatrix> matrixes;
	for (int i = 0; i < func->getNumOfFunc(); i++) {
		std::cout << "\nEnter a " << sizeMat << " x " << sizeMat << " matrix:" << std::endl;
		SquareMatrix matrix(sizeMat);
		std::cin >> matrix;
		matrixes.push_back(matrix);
	}
	return matrixes;
}

 //-----------------------------------------------------
 
void evaluate::getFunction(functions* func, int sizeMat)
{
	std::cout << "Evaluating function: " << func->getName() << std::endl;
	calculate(std::shared_ptr<functions>(func, [](functions*) {}), sizeMat);
}
//??????
//----------------------------------------------------------
void evaluate::calculate(std::shared_ptr<functions> func, int sizeMat)
{
	std::vector<SquareMatrix> matrixes = createMatrixes(func, sizeMat);


	//std::cout << "\n" << ->getName();
	for (auto& matrix : matrixes)
	{
		std::cout << " (\n" << matrix << ")";
	}
	std::cout << " = \n" << func->action(matrixes) << std::endl;

}

//----------------------------------------------------------
void evaluate::print()
{
}
