#include "functions.h"
#include "SquareMatrix.h"
class trans : public functions
{
public:

	trans();
	virtual SquareMatrix action(int);
	virtual SquareMatrix action(std::vector<SquareMatrix> func);
	virtual std::string getName() override;

private:
	//SquareMatrix m_matr;
 
};