#include "Calculator.h"

Calculator::Calculator()
	:m_sizeMat(0), m_index(0)
{
	m_func.push_back(std::make_shared<id>());
	m_func.push_back(std::make_shared<trans>());

	m_printInstructor.addLine(m_func[0].get());
	m_printInstructor.addLine(m_func[1].get(.0));
	printFunction();
}

//--------------------------------------------------------------
void Calculator::printFunction()
{
	std::cout << m_printInstructor;
}
//--------------------------------------------------------------
void Calculator::chooseFunction()
{
	std::cin >> m_funcName;
	while (m_funcName != "exit")
	{


		if (m_funcName == "eval")
		{
			//std::cout << "\nEnter the index of the function you want to evaluate: \n";
			std::cin >> m_index;
			m_eval.getFunction(m_func[m_index].get());
		}
		else if (m_funcName == "scal")
		{
			int scalar;
			std::cin >> scalar;
			m_func.push_back(std::make_shared<scal>(scalar));
			m_printInstructor.addLine(m_func[2].get());
			printFunction();
		}
		else
		{
			std::cout << "Invalid command\n";
		}
		std::cin >> m_funcName;
	}
}
//--------------------------------------------------------------

