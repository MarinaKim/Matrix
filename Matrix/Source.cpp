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
		/*�	����������� �������� ������������*/
	case 1: {
		cout << "�������� ������������: \n";
		matrix <int> mas(2, 3, 5);
		cout << "1:\n";
		cout << mas;

		matrix <int> mas2;
		mas2 = mas;
		cout << "2:\n";
		cout << mas2;
	}break;
		//�	����������� �������� ������ �������
	case 2: {

	}break;

		//�	����������� �������� ��� �������� ���� ������
	case 3: {
		cout << "�������� �������� ���� ������: \n";
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

		//�	����������� �������� ��� �������� ������� � ������
	case 4: {
		cout << "�������� �������� ������� � ������:\n";
		matrix <int> mas(5, 4, 2);
		cout << "1:\n";
		cout << mas;
		int a;
		cout << "������� �����: "; cin >> a;
		mas + a;
		cout << mas;
	}break;

		//����������� �������� ���������� � ���������� ��� �������
	case 5: {
		cout << "��������� ���������� � ����������\n";
		matrix <int> mas(4, 4, 5);
		cout << "�������\n";
		cout << mas;
		cout << "�������� ����������:\n";
		mas.operator++();
		cout << mas;
		cout << "�������� ����������:\n";
		mas.operator--();
		cout << mas;
	}break;

		//����������� �������� �����/������ ��� ������������� �������
	case 6: {
		matrix <int> mas(3, 4);
		cout << "�������, ��������� �� �����:\n";

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

		/*����������� ������:
o	��� ���������� ������
o	��� ���������� �������
o	��� �������� ������
o	��� �������� �������
o	�������� ������ set � get*/
	case 7: {

	}break;
	}


	system("pause");
	return 0;
}