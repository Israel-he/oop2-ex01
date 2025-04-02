#include "Calculator.h"

Calculator::Calculator()
	:m_sizeMat(0), m_index(0), m_vecSize(0)
{
	m_func.push_back(std::make_shared<id>());
	m_func.push_back(std::make_shared<trans>());

	m_printInstructor.addLine(m_func[m_vecSize].get());
	m_vecSize++;
	m_printInstructor.addLine(m_func[m_vecSize].get());
}

//--------------------------------------------------------------
void Calculator::printFunction()
{
	std::cout << m_printInstructor;
}
//--------------------------------------------------------------
void Calculator::chooseFunction()
{
	printFunction();
	std::cin >> m_funcName;
	while (m_funcName != "exit")
	{

		if (m_funcName == "eval")
		{
			//std::cout << "\nEnter the index of the function you want to evaluate: \n";
			std::cin >> m_index;
			std::cout << "Enter the size of the matrix: \n";
			std::cin >> m_sizeMat;
			m_eval.getFunction(m_func[m_index].get(), m_sizeMat);
		}
		else if (m_funcName == "scal")
		{
			int scalar;
			std::cin >> scalar;
			m_func.push_back(std::make_shared<scal>(scalar));
			m_vecSize++;
			m_printInstructor.addLine(m_func[m_vecSize].get());
			printFunction();
		}
		else if (m_funcName == "sub")
		{
			int index1, index2;
			//std::cout << "Enter the indexes of the functions you want to subtract: \n";
			std::cin >> index1 >> index2;
		
			m_func.push_back(std::make_shared<sub>(m_func[index1], m_func[index2]));
			m_vecSize++;
			m_printInstructor.addLine(m_func[m_vecSize].get());
		}
		else
		{
			std::cout << "Invalid command\n";
		}
		printFunction();
		std::cin >> m_funcName;
		std::cout << "\n";
	}
}
//--------------------------------------------------------------

