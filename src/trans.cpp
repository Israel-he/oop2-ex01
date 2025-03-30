#include "trans.h"
#include <iostream>
#include <algorithm>
#include <vector>

trans::trans()
	:m_name("trans")
{
}
//-----------------------------------------------------
SquareMatrix trans::action(SquareMatrix mat)
{
	SquareMatrix mat2(mat.getSize());
	for (int i = 0; i < mat.getSize(); i++)
	{
		for (int j = 0; j < mat.getSize(); j++)
		{
		
			mat2(j,i) = mat(i, j);
		}
		 
	}
	return mat2;
}

//-----------------------------------------------------
std::string trans::getName()
{
	return m_name;
}


