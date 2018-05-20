#pragma once
#include"Library.h"
template <typename T>

class Matrix {
private:
	T**els;
	size_t cols;
	size_t rows;
public:
	Matrix();
	Matrix(int rows, int rols, T e = 0);
	Matrix(T*arr, int rows);

	Matrix(const Matrix<T>& obj);
	template <typename T>
	friend ostream& operator<<(ostream& os, Matrix<T> &obj);
	template <typename T>
	friend istream& operator >> (istream& is, Matrix<T>& obj);
	
	Matrix operator+(const Matrix<T> &obj);
	~Matrix();
};