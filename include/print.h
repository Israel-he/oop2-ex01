#pragma once	
#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
#include "functions.h"
class print
{
public:

	print();

	void addLine(functions* func);
	friend std::ostream& operator<<(std::ostream& os, const print& matrix);

private:
	std::vector<std::string> m_print;
	functions m_func;
 
};