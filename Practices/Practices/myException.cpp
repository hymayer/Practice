#include <iostream>
#include <exception>

using  namespace std;

class MyException :public exception {
public:
	const char* what()const throw()
	{
		return "C++ Excption";
	}
};

//int main()
//{
//	try
//	{
//		throw MyException();
//	}
//	catch (MyException &e)
//	{
//		std::cout << "MyException caught" << std::endl;
//		std::cout << e.what() << std::endl;
//	}
//	system("pause");
//}