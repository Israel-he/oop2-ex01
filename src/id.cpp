#include "id.h"

id::id()
	:m_name("id")
{
}

SquareMatrix id::action(SquareMatrix mat)
{
	return mat;

}

std::string id::getName()
{
	return  m_name;
}
