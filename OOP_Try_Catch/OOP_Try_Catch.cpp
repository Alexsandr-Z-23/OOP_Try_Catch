#include <iostream>
//#include<exception>
using namespace std;

//namespace std
//{
//	class exception
//	{
//	public:
//		exception() noexcept;
//		exception(const exception&) noexcept;
//		exception& operator =(const exception&) noexcept;
//		virtual const char* what() const noexcept;
//		virtual ~exception();
//	};
//}

/////////////////////////////////////////////////

//class AgeExeption : public std::exception 
//{
//public:
//	AgeExeption(string message) : message{ message } {};
//	string getMess() const { return message; };
//
//private:
//	string message;
//};
//
//class Person
//{
//public:
//	Person(string name,unsigned age)
//	{
//		if (!age||age>110)
//		{
//			throw AgeExeption{ "Не верный возраст!!!" };
//		}
//		this->name = name;
//		this->age = age;
//	}
//	void print()
//	{
//		cout << "Name : " << name << "\tAge : " << age << endl;
//	}
//private:
//	string name;
//	unsigned age;
//};
///////////////////////////////////////////////////////////
double divide(int,int);
void main()
{
	setlocale(LC_ALL, "ru");
	/*try
	{
		Person tom{ "Tom",28 };
		tom.print();
		Person Bob{ "Bob",2000 };
		Bob.print();
	}
	catch (const AgeExeption& ex)
	{
		cout << ex.getMess() << endl;
	}*/

	int a{ 500 }, b{};
	try
	{
		double z{ divide(a,b) };
		cout << z << endl;
	}
	catch (const std::exception& ex)
	{
		cout << "Ошибка кода!" << endl;
	}
	
}
double divide(int a, int b)
{
	if (!b)
		throw std::exception();
	return a / b;
}

////////////////////////////////////////////////////////
//double divide(int a, int b)
//{
//	if (!b)
//		throw 0;
//	if (b>a)
//	{
//		throw string{ "Второе число больше первого!" };
//	}
//	return a / b;
//}
//void tests(int a, int b)
//{
//	try
//	{
//		double z{ divide(a,b) };
//		cout << z << endl;
//	}
//	catch (int Code)
//	{
//		cout << "Ошибка кода!" << endl;
//	}
//	catch (string error_mes)//const char* error_mes
//	{
//		cout << error_mes << endl;
//	}
//	catch (...)
//	{
//		cout << "Ошибка кода 11111 !" << endl;
//
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL,"ru");
//
//	tests(100,20 );
//	tests(100, 0);
//	tests(100, 10000);
//
//
//	
//	cout << "Завершение программы!" << endl;
//
//	cin.get();
//   
//}


