#include <string>
#include <list>
#include <stdio.h>
#include "test.h"

using namespace std;

template<typename T>void swap_temp(T& t1, T& t2)
{
	T temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
}

//int main()
//{
//	int num1 = 1, num2 = 2;
//	swap_temp<int>(num1, num2);
//	printf("%d %d", num1, num2);
//	system("pause");
//	return 0;
//}


