#include"Matrix.h"
#include"Matrix.cpp"

#pragma region
template <class T>
void printArr(T * arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

template <typename T1, typename T2>
auto calc(T1 a, T2 b)->decltype(a / b)
{
	return a / b;
}

#pragma endregion

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Enter the num of task: ";
	cin >> n;
	switch (n)
	{
		/*Х	ѕерегрузить операцию присваивани€*/
	case 1: {
		cout << "оператор присваивани€: \n";
		matrix <int> mas(2, 3, 5);
		cout << "1:\n";
		cout << mas;

		matrix <int> mas2;
		mas2 = mas;
		cout << "2:\n";
		cout << mas2;
	}break;
		//Х	ѕерегрузить операцию вызова функции
	case 2: {

	}break;

		//Х	ѕерегрузить операцию дл€ сложени€ двух матриц
	case 3: {
		cout << "оператор сложени€ двух матриц: \n";
		matrix <int> mas(5, 4, 1);
		cout << "1:\n";
		cout << mas;
		cout << "----------------------------------------------" << endl;

		matrix<int> mas1(5, 4, 2);
		cout << "2:\n";
		cout << mas1;
		cout << "----------------------------------------------" << endl;
		matrix<int> mas2;
		mas2 = mas + mas1;
		cout<<mas2;
	}break;

		//Х	ѕерегрузить операцию дл€ сложени€ матрицы с числом
	case 4: {
		cout << "оператор сложени€ матрицы с числом:\n";
		matrix <int> mas(5, 4, 2);
		cout << "1:\n";
		cout << mas;
		int a;
		cout << "введите число: "; cin >> a;
		mas + a;
		cout << mas;
	}break;

		//ѕерегрузить операцию инкремента и декремента дл€ матрицы
	case 5: {
		cout << "операторы инкремента и декремента\n";
		matrix <int> mas(4, 4, 5);
		cout << "матрица\n";
		cout << mas;
		cout << "оператор инкремента:\n";
		mas.operator++();
		cout << mas;
		cout << "оператор декремента:\n";
		mas.operator--();
		cout << mas;
	}break;

		//ѕерегрузить операции ввода/вывода как дружественные функции
	case 6: {
		matrix <int> mas(3, 4);
		cout << "матрица, считанна€ из файла:\n";

		ifstream in_file("in.txt");
		if (!in_file) {
			cerr << "File open Error" << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >> mas;
			}
		}
		in_file.close();
		cout << mas;
	}break;

		/*–еализовать методы:
o	ƒл€ добавлени€ строки
o	ƒл€ добавлени€ столбца
o	ƒл€ удалени€ строки
o	ƒл€ удалени€ столбца
o	ƒобавить методы set и get*/
	case 7: {

	}break;
	}


	system("pause");
	return 0;
}