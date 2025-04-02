#pragma once
#include "functions.h"

class evaluate
{
public:
	evaluate();
	void getFunction(functions* func,int sizeMat);
	void calculate(std::shared_ptr<functions> func, int sizeMat);
	std::vector<SquareMatrix> createMatrixes(std::shared_ptr<functions> func, int sizeMat);

	void print();
private:

	//functions m_func;
	int m_sizeMat;
};
