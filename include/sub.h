#pragma once
#include <memory>
#include <vector>
#include <string>
#include <iostream>
#include "evaluate.h"
#include "functional"
#include "print.h"	
class sub : public functions
{
public:

	sub(std::shared_ptr<functions> func1, std::shared_ptr<functions> func2);
    virtual	SquareMatrix action(SquareMatrix mat) override;
	std::string getName();




private:
	/*functions* m_func1;
	functions* m_func2;*/
	evaluate m_eval;
	std::shared_ptr<functions> m_func1;
	std::shared_ptr<functions> m_func2;

	print m_printName;
	char m_sing = '-';
	std::string m_funcName;
};




	//m_func.push_back(std::make_shared<sub>(m_func[index1].get(), m_func[index2].get()));

	/*private:
		std::shared_ptr<functions> m_func1;
		std::shared_ptr<functions> m_func2;
		std::string m_funcName;
		sub(std::shared_ptr<functions>func1, std::shared_ptr<functions>func2);*/

