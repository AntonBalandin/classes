#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	ifstream fin;
//	fin.exceptions(ifstream::badbit | ifstream::failbit);
//	try
//	{
//		cout << "\n������� ������� ����";
//		fin.open("example.txt");
//		cout << "\n���� ������� ������";
//	}
//			catch (const ifstream::failure& ex)
//			{
//				cout << ex.what() << endl;
//				cout << ex.code() << endl;
//				cout << "\n������ �������� �����";
//			}
//		
//			return 0;
//}



void Func(double v)
{
	if (v == 0)
	{
		throw "������� �� 0";
	}
	cout << 100. / v;
}


int main() {
	setlocale(LC_ALL, "RUS");
	double a = 5,b;
	

	try
	{
		Func(0);
	}
	catch (const std::exception & e)
	{
		cout << e.what();
	}
	/*catch (const char *e)
	{
		cout << e;
	}*/
	catch (const char *e)
	{
		const char *r = "�����";
		cout << r;
	}
	return 0;
}