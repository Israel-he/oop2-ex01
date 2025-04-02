#include "trans.h"
#include <iostream>
#include <algorithm>
#include <vector>

trans::trans()
	:functions("trans", 1)
{
}

SquareMatrix trans::action(std::vector<SquareMatrix> func)
{
	SquareMatrix mat2(func[0].getSize());
	for (int i = 0; i < func[0].getSize(); i++)
	{
		for (int j = 0; j < func[0].getSize(); j++)
		{
			mat2(j, i) = func[0](i, j);
		}
	}
	return mat2;
}

//-----------------------------------------------------
 


SquareMatrix trans::action(int size)
{
	 
	std::cout << "Enter a " << size << " x " << size << "matrix:" << std::endl;
	SquareMatrix mat1(size);
	SquareMatrix mat2(size);
	std::cin >> mat1;
	for (int i = 0; i < mat1.getSize(); i++)
	{
		for (int j = 0; j < mat1.getSize(); j++)
		{
			mat2(j, i) = mat1(i, j);
		}
	}
	return mat2;
}
 