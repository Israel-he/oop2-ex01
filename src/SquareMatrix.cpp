#include "SquareMatrix.h"
#include <iostream>

SquareMatrix::SquareMatrix(int m_sizeMat)
	        :m_sizeMat(m_sizeMat)
{
	resize();
}

//-----------------------------resize------------------------------
void SquareMatrix::resize()
{
	m_matrix.resize(m_sizeMat);
	for (int i = 0; i < m_sizeMat; i++)
	{
		m_matrix[i].resize(m_sizeMat);
	}
}
//---------------------------------------------------------------
int SquareMatrix::getSize() const
{
	return m_sizeMat;
}
//--------------------------------------------------------------
int SquareMatrix::operator()(int i, int j) const
{
	return m_matrix[i][j];
}	
//-----------------------------------------------------------
int& SquareMatrix::operator()(int i, int j)
{
	return m_matrix[i][j];
}

//-------------------------operator>>----------------------------
std::istream& operator>>(std::istream& is, SquareMatrix& matrix)
{
	for (int i = 0; i < matrix.m_sizeMat; i++)
	{
		for (int j = 0; j < matrix.m_sizeMat; j++)
		{
			is >> matrix.m_matrix[i][j];
		}
	}
	return is;
}
//--------------------------operator<<---------------------------	

std::ostream& operator<<(std::ostream& os, const SquareMatrix& matrix)
{
	for (int i = 0; i < matrix.m_sizeMat; i++)
	{
		for (int j = 0; j < matrix.m_sizeMat; j++)
		{
			os << matrix.m_matrix[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}
//-----------------------------------------------------

SquareMatrix SquareMatrix::operator+(const SquareMatrix& other) const
{
	SquareMatrix result(m_sizeMat);
	for (int i = 0; i < m_matrix.size(); i++)
	{
		for (int j = 0; j < m_matrix.size(); j++)
		{
			result.m_matrix[i][j] = m_matrix[i][j] + other.m_matrix[i][j];
		}
	}
	return result;
}
//-----------------------------------------------------------
SquareMatrix SquareMatrix::operator-(const SquareMatrix& other) const
{
	SquareMatrix result(m_sizeMat);
	for (int i = 0; i < m_matrix.size(); i++)
	{
		for (int j = 0; j < m_matrix.size(); j++)
		{
			result.m_matrix[i][j] = m_matrix[i][j] - other.m_matrix[i][j];
		}
	}
	return result;
}

//-----------------------------------------------------------

 //void SquareMatrix::print()
 //{
	// for (int i = 0; i < m_sizeMat; i++)
	// {
	//	 for (int j = 0; j < m_sizeMat; j++)
	//	 {
	//		 std::cout << m_matrix[i][j] << " ";
	//	 }
	//	 std::cout << std::endl;
	// }
 //}



//-----------------------------------------------------------
/*void SquareMatrix::init()
{
	int num;
	for (int i = 0; i < m_sizeMat; i++)
	{
		for (int j = 0; j < m_sizeMat; j++)
		{
			std::cin >> num;
			m_matrix[i][j] = num ;
		}
	}
	*/ 
//}
//--------------------------------------------------------------


//SquareMatrix SquareMatrix::operator+(const SquareMatrix& mat1, const SquareMatrix& mat2) const
//{
//	SquareMatrix result(mat1.m_sizeMat);
//	for (int i = 0; i < mat1.m_sizeMat; i++)
//	{
//		for (int j = 0; j < mat1.m_sizeMat; j++)
//		{
//			result.m_matrix[i][j] = mat1.m_matrix[i][j] + mat2.m_matrix[i][j];
//		}
//	}
//	return result;
//}

//--------------------------------------------------------------------