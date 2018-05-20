
#include"Matrix.h"
//Х	 онструктор по умолчанию
template <typename T>
Matrix<T>::Matrix() {
	els = nullptr;
	cols = 0;
	rows = 0;
}

//Х	 онструктор создающий матрицу  заданного размера и
//инициализирующий все элементы указанным значением.
//ѕо умолчанию значение равно нулю
template <typename T>
Matrix<T>::Matrix(int rows, int rols, T e = 0)
{
	this->rows = rows;
	this->cols = cols;

	this->els = new T*[rows];
	for (int i = 0;i < rows;i++)
		this->els[i] = new T[cols];

	for (int i = 0;i < rows;i++)
		for (int j = 0;i < cols;j++)
			this->els[i][j] = e;
}

//Х	 онструктор создающий матрицу из существующего массива
template <typename T>
Matrix<T>::Matrix(T*arr, int rows) {
	int count=arr
}

//copy constructor
template <typename T>
Matrix<T>::Matrix(const Matrix& obj) {
	rows = obj.rows;
	cols = obj.cols
		for (int i = 0;i < rows;i++)
			els[i] = new T[cols];
	for (int i = 0;i < rows;i++)
		for (int j = 0;j < cols;j++)
			els[i][j] = obj.els[i][j];
}

template<typename T>
Matrix Matrix<T>::operator+(const Matrix<T>& obj)
{
	if (this->rows == obj.rows&&this->cols == obj.cols) {
		for (int i = 0;i < obj.rows;i++) {
			for (int j = 0;j < obj.cols;j++) {
				this->els[i][j] += obj.els[i][j];
			}
		}
	}
	return *this;
}

//destructor
template <typename T>
Matrix<T>::~Matrix() {
	for (int i = 0;i < rows;i++)
		delete[] els[i];
	delete els;
}

/*
vector vector:: operator+(const vector &obj)
{
	if (this->cur_size == obj.cur_size) {
		for (int i = 0; i < cur_size; i++)
		{
			els[i] += obj.els[i];
		}
	}
	return *this;
}*/
template<typename T>
ostream & operator<<(ostream & os, Matrix<T>& obj)
{
	for (int i = 0;i < obj.rows;i++) {
		for (int j = 0;j < obj.cols;j++) {
			os << obj[i][j] << "\t";
		}
	}
	return os;
}

template<typename T>
istream & operator >> (istream & in, Matrix<T>& obj)
{
	for (int i = 0;i < obj.rows;i++) {
		for (int j = 0;j < obj.cols;j++) {
			in << obj[i][j];
		}
	}
	return in;
}
