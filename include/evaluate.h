#include "functions.h"

class evaluate
{
public:
	evaluate();
	void getFunction(functions* func);

	SquareMatrix createMatrix();
	void print();
private:

	functions m_func;
	int m_sizeMat;
};
