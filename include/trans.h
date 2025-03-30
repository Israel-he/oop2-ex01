#include "functions.h"
#include "SquareMatrix.h"
class trans : public functions
{
public:

	trans();
	virtual	SquareMatrix action(SquareMatrix mat) override;
	virtual std::string getName() override;

private:
	//SquareMatrix m_matr;
	std::string m_name;
};