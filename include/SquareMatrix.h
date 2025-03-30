#pragma once
#include <vector>
#include <iostream>
#include <istream>
class SquareMatrix
{
public:
	SquareMatrix(int m_sizeMat);

	friend std::istream& operator>>(std::istream& is, SquareMatrix& matrix);
	friend std::ostream& operator<<(std::ostream& os, const SquareMatrix& matrix);

	int operator()(int i, int j) const;
	int& operator()(int i, int j);
    SquareMatrix operator+(const SquareMatrix& mat1) const;

	void resize();
	int getSize() const;

   //void operator-(const SquareMatrix& mat1, const SquareMatrix& mat2);
   //operator*(const SquareMatrix& mat1, const SquareMatrix& mat2);
   //operator*(const SquareMatrix& mat1, int scalar);
	
    //SquareMatrix operator+(const SquareMatrix& other) const;


	 
	
private:
	std::vector<std::vector<int>> m_matrix;
	int m_sizeMat;
};







/*public:
	SquareMatrix(int n);
	~SquareMatrix();
	void set(int i, int j, int value);
	int get(int i, int j);
	int size();
	void print();*/