 #include "print.h"

print::print()
	: m_func(" " ,0)
{
}

//-----------------------------------------------------
void print::addLine(functions* func)
{
	m_print.push_back(func->getName());
}

//-----------------------------------------------------
std::ostream& operator<<(std::ostream& os, const print& matrix)
{
	os << "List of available matrix operations :" << std::endl;
	for (int i = 0; i < matrix.m_print.size(); i++)
	{
		os << i << " for-> " << matrix.m_print[i] << std::endl;
	}

	os << "\n \nEnter command('help' for the list of available commands) : ";
	return os;
}
