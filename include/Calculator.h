#pragma once
#include <memory>
#include <vector>
#include <string>

#include <iostream>
#include "evaluate.h"
#include "id.h"
#include "trans.h"
#include "print.h"	
#include "scal.h"
#include "sub.h"
//#include "functions.h"
//#include "SquareMatrix.h"
class Calculator
{
public:

	Calculator();

	void chooseFunction();
	void printFunction();
private:

	std::vector<std::shared_ptr<functions>> m_func;
	evaluate m_eval;

	std::string m_funcName;
	int m_index;
	int m_sizeMat;
	print m_printInstructor;

	int m_vecSize;
};