#ifndef _MATRIX_H_
#define _MATRIX_H_

#include"Variable.h"
#include"Scalar.h"


class Matrix :public Variable {
{
public:
	Matrix(int rows, int cols, int val);
	//Matrix(int startVal, int endVal);
	~Matrix();
	VarPtr Copy();
	int NumElems();
	Matrix Size();
	VarPtr Conv(VarPtr ptr);
	VarPtr Transpose();
	int Row_;
	int Col_;
	IdxVec* *matrix_;

	int& operator[](int idx);
	int& operator[](IdxVec);

	VarPtr operator+(const Variable&);
	VarPtr operator+(const Scalar&);
	VarPtr operator+(const Matrix&);
	// ToDo: complete class definition
	// ToDo: complete class definition
	
	virtual VarPtr Conv(VarPtr rhs) const;
private:
	
};




#endif // _MATRIX_H_