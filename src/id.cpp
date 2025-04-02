#include "id.h"

id::id()
	:functions("id", 1)
{
}

SquareMatrix id::action(int size)
{
	SquareMatrix mat(size);
	std::cin >> mat;
	return mat;
}

SquareMatrix id::action(std::vector<SquareMatrix> func)
{
	return SquareMatrix();
}

 

 
